#include<iostream>
using namespace std;
#define MAX 10

void prosees(int data[]){
    for (int m = 0; m < MAX; m++)
        {
            cout<<data[m]<<" "; 
        }
        cout<<endl;
}

void squentialSearch(int data[], int key)
{
    cout<<"\nProses Sequential Sorting\n";
    int jumlah,count;
    for (int i = 0; i < MAX ; i++)
    {
        prosees(data);
        if (data[i] == key)
        {
            prosees(data);
            jumlah++;
        }
        count++;
    }
    if (jumlah > 0)
    {
        cout<<"Data ditemukan\nDengan search sebanyak : "<<count;
    }
    else{
        printf("Data tidak ada");
    }
}

void binarySearch(int data[], int key)
{
    int A,R,T,count;
    bool ada = false;

    A = 0;
    R = 9;

    printf("Proses Binary search\n");
    do 
    {
        T =(A+R)/2;
        if (data[T] == key)
        {
            ada = true;
        }
        else if (data[T] < key)
        {
            R = T-1;   
        }
        else
        {
            A = T+1;
        }
        prosees(data);
        count++;
        
    }while(A <= R && ada == false);

    if (ada == true) cout<<"Data ditemukan\nDengan search sebanyak : "<<count<<" kali";
    else cout<<"Data tidak ditemukan";

}

int main()
{
    int data[MAX] = {4,3,6,2,8,5,9,1,13,56};
    int key;

    cout<<"Angka yang akan dicari : ";cin>>key;
    squentialSearch(data,key);
    printf("\n\n");
    binarySearch(data,key);

    return 0;
}