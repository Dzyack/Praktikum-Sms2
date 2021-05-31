#include <iostream>
using namespace std;

struct dataBuku 
{
    string judul,pengarang,penerbit;

    //pointer
    dataBuku *prev;
    dataBuku *next;
};

dataBuku *head, *tail, *cur, *newNode, *afterNode, *del;

void createDataBuku(string judul, string pengarang, string penerbit)
{
    head = new dataBuku();
    head -> judul = judul;
    head -> pengarang = pengarang;
    head -> penerbit = penerbit;
    head -> prev = head;
    head -> next = head;
    tail = head;
}

void printData()
{
    if (head == NULL)
    {
        cout<<"Link masih kosong"<<endl;
    }
    else
    {
        cout<<"Data buku :"<<endl;
        cur = head;
        while (cur->next != head)
        {
            //print
            cout<<"Judul buku : "<<cur->judul<<endl;
            cout<<"Pengarang buku : "<<cur->pengarang<<endl;
            cout<<"Penerbit buku : "<<cur->penerbit<<endl<<endl;

            //step
            cur = cur->next;
        }
        //print last node
        cout<<"Judul buku : "<<cur->judul<<endl;
        cout<<"Pengarang buku : "<<cur->pengarang<<endl;
        cout<<"Penerbit buku : "<<cur->penerbit<<endl<<endl;

    }
}

void addDataAwal(string judul, string pengarang, string penerbit)
{
    newNode = new dataBuku();
    newNode -> judul = judul;
    newNode -> pengarang = pengarang;
    newNode -> penerbit = penerbit;
    newNode -> prev = tail;
    newNode -> next = head;
    head -> prev = newNode;
    tail -> next = newNode;
    head = newNode;
}

void addDataAkhir(string judul, string pengarang, string penerbit)
{
    newNode = new dataBuku();
    newNode -> judul = judul;
    newNode -> pengarang = pengarang;
    newNode -> penerbit = penerbit;
    newNode -> prev = tail;
    newNode -> next = head;
    head -> prev = newNode;
    tail -> next = newNode;
    tail = newNode;
}

void deleteAwal()
{
    del = head;
    head = head ->next;
    tail -> next = head;
    head ->prev = tail;
    delete del;  
}

void deleteAkhir()
{
    del = tail;
    tail = tail ->prev;
    tail -> next = head;
    head -> prev = tail;
    delete del;
}

int main()
{
    cout<<"Data 1 (Create dan AddAwal) \n";
    createDataBuku("Memasak", "Zuhal", "Matahari");
    addDataAwal("Memakan", "Andre", "Gramedia");
    addDataAwal("Meminum", "Rizal", "Zbooks");
    addDataAwal("Mengajar", "Arman", "CahyaLestari");
    addDataAwal("Olahraga", "Zain", "BulanBintang");
    printData();

    cout<<"Data 2 (AddAkhir) \n";
    addDataAkhir("Bermain", "Zainal", "TokoBuku");
    printData();

    cout<<"Data 3 (DeleteAwal) \n";
    deleteAwal();
    printData();

    cout<<"Data 4 (DeleteAkhir) \n";
    deleteAkhir();
    printData();
    return 0;
}