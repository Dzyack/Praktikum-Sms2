#include <iostream>
using namespace std;

struct DataMobil
{
    string nomor, nama, merk, plat;
    DataMobil *prev, *next;
};

DataMobil *head, *tail, *cur, *newNode, *del;

void createDataMobil(string data[4])
{
    head = new DataMobil();
    head->nomor = data[0];
    head->nama = data[1];
    head->merk = data[2];
    head->plat = data[3];
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

void addDataAWal(string data[4])
{
    if (head == NULL)
    {
        cout<<"Parkiran Kosong!!";
    }
    else
    {
        newNode = new DataMobil();
        newNode->nomor = data[0];
        newNode->nama = data[1];
        newNode->merk = data[2];
        newNode->plat = data[3];
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    
}

void addDataAkhir(string data[4])
{
    if (head == NULL)
    {
        cout<<"Parkiran Kosong!!";
    }
    else
    {
        newNode = new DataMobil();
        newNode->nomor = data[0];
        newNode->nama = data[1];
        newNode->merk = data[2];
        newNode->plat = data[3];
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
    
}

void deleteAwal()
{
    if (head == NULL)
    {
        cout<<"Parkiran Kosong!!";
    }
    else
    {
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
}

void deleteAkhir()
{
    if (head == NULL)
    {
        cout<<"Parkiran Kosong!!"<<endl;
        exit(0);
    }
    else
    {
        del = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
}


void printData()
{
    if (head == NULL)
    {
        cout<<"Parkiran Kosong!!";
    }
    else
    {
        cur = head;
        while (cur != NULL)
        {
            cout<<cur->nomor<<"Nama : "<<cur->nama<<endl;
            cout<<"   Merk mobil : "<<cur->merk<<endl;
            cout<<"   Plat nomor : "<<cur->plat<<endl<<endl;
            cur = cur->next;
        }
        
    }
    
}

int main()
{
    string mobil1[4] = {"1. ", "Zuhal", "Gallardo", "W 2005 CP"};
    string mobil2[4] = {"2. ", "Andre", "Ferrari", "A 2233 BC"};
    string mobil3[4] = {"3. ", "Herman", "Mustang", "B 5423 YW"};
    string mobil4[4] = {"4. ",  "Agus", "Super GT", "C 1728 UA"};
    string mobil5[4] = {"5. ", "Yudha", "Lamborghini", "D 4272 PK"};

    cout<<"Data 1 (Create) : "<<endl;
    createDataMobil(mobil1);
    printData();

    cout<<"Data 2 (AddAwal) : "<<endl;
    addDataAWal(mobil2);
    addDataAWal(mobil3);
    printData();

    cout<<"Data 3 (AddAkhir) : "<<endl;
    addDataAkhir(mobil4);
    addDataAkhir(mobil5);
    printData();

    cout<<"Data 4 (DeleteAwal) : "<<endl;
    deleteAwal();
    printData();

    cout<<"Data 5 (DeleteAkhir) : "<<endl;
    deleteAkhir();
    deleteAkhir();
    deleteAkhir();
    printData();

    cout<<"Data 6 : "<<endl;
    deleteAkhir();
    printData();




    return 0;
}