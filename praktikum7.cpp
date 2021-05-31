#include<iostream>
#include<time.h>
using namespace std;

void insertionSort(int array[], int n)
{
    int count = 0;
    cout<<"Proses Insertion Sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        
        int key = array[i];
        int j = i-1;
        while (j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
        
        
        for (int m = 0; m < n; m++)
        {
            cout<<array[m]<<" ";
        }
        count++;
        cout<<endl;
    }
    
    cout<<"\nHasil Insertion Sorting : \n";
    for (int m = 0; m < n; m++)
    {
        cout<<array[m]<<" ";
    }
    cout<<endl;
    cout<<"Dengan sorting sebanyak : "<<count<< " kali" <<endl<<endl;
}

void selectionSort(int data[], int n)
{
    int temp, min, count;
    cout<<"Proses Selection Sorting"<<endl;
    for (int i = 0; i < n-1; i++)
    {
        min =i;
        
        for (int j = i+1; j < n; j++)
        {
            if (data[j]>data[min])
            {
                min=j;
            }
            
        }
        for (int m = 0; m < n; m++)
        {
            cout<<data[m]<<" "; 
        }
        count++;
        cout<<endl;
        temp = data[i];
        data[i]=data[min];
        data[min]=temp;
    
    }
    cout<<"\nHasil Selection Sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<"\nDengan sorting sebanyak "<<count<<" kali"<<endl<<endl;
    
}

void binaryInsertionSort(int data[], int n) 
{ 
    int i, j, l, r, m, x, count; 
    cout<<"Proses Binary Sorting"<<endl;
    for (i=1; i<n; i++)
    { 
        x = data[i]; 
        l = 0; 
        r = i - 1; 
        while(l <= r)
        { 
            m = (l + r) / 2; 
            if(x < data[m]) r = m - 1; 
            else l = m + 1; 
        } 
        
        
        for(j=i-1; j>=l; j--) 
        data[j+1] = data[j]; 
        data[l]=x; 
        for (int m = 0; m < n; m++)
        {
            cout<<data[m]<<" "; 
        }
        cout<<endl;
        count++;
    } 
    printf("\nHasil Binary Sort\n"); 
    for(i=0; i<n; i++) 
    { 
            printf("%d ", data[i]); 
    } 
    cout<<"\nDengan sorting sebanyak "<<count<<" kali"<<endl<<endl;
}

int main()
{   
    int n, i; 
 
    cout<<"Masukkan jumlah data : ";cin>>n;
    int data[n];

    srand(time(0)); 
    for(i=0; i<n; i++) 
    { 
        data[i] = (int) rand()%100+1; 
        printf("\nData ke %d : %d ", i, data[i]); 
    } 
    cout<<endl<<endl;
    insertionSort(data, n);
    selectionSort(data,n);
    binaryInsertionSort(data,n); 
 
    

    return 0;
}