#include<iostream>
#include<time.h>
using namespace std;

void bubbleSort(int data[], int n, int temp, int &count)
{

    cout<<"Proses Bubble Sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < n; m++)
        {
            cout<<data[m]<<" "; 
        }
        cout<<endl;
        count++;
        for (int j = i; j < n; j++)
        {
            
            if (data[i]>data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
                count++;
            }
            count++;
        }
        
        
    }
    cout<<"\nData setelah Bubble sorting\n";
    for(int i=0; i<n; i++) 
    { 
        printf("%d ", data[i]); 
    } 
    cout<<"\nDengan sorting sebanyak "<<count<<" kali"<<endl<<endl;
    
}

int main()
{
    int n, i, temp, count; 
    
    cout<<"Masukkan jumlah data : ";cin>>n;
    int data[n];

    srand(time(0)); 
    for(i=0; i<n; i++) 
    { 
        data[i] = (int) rand()%100+1; 
        printf("\nData ke %d : %d ", i, data[i]); 
    } 
    cout<<endl<<endl;
    cout<<"Data sebelum sorting\n";
    for(i=0; i<n; i++) 
    { 
        printf("%d ", data[i]); 
    } 
    cout<<endl<<endl;
    bubbleSort(data,n,temp,count);



    return 0;
} 