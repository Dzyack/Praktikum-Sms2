#include<iostream>
#include<time.h>
using namespace std;

void shellSort(int data[], int n, int temp, int &count)
{
    cout<<"Proses Shell Sorting"<<endl;
    for (int num = n/2; num > 0; num /= 2)
    {
        for (int m = 0; m < n; m++)
        {
            cout<<data[m]<<" "; 
        }
        cout<<endl;
        for (int j = num; j < n; j += 1)
        {
            temp = data[j];
            int a=0;
            for (a = j; (a <= num) && (data[a-num]>temp); a -= num)
            {
                data[a] = data[a - num];
                
                count++;
            }
            data[a] = temp;
            count++;
        }
        count++; 
    }
    

    
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
    shellSort(data,n,temp,count);
    cout<<"\nData setelah Shell sorting\n";
    for(int i=0; i<n; i++) 
    { 
        printf("%d ", data[i]); 
    } 
    cout<<"\nDengan sorting sebanyak "<<count<<" kali"<<endl<<endl;



    return 0;
} 