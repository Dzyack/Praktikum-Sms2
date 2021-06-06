#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
using namespace std;

void MergeSort(int arr[], int l, int h);
void Merge(int arr[], int l, int mid, int h);

void Merge(int arr[], int l, int m, int h)
{
    int i = l;
    int j = m+1;
    int k = l;

    int temp[MAX];

    while (i<=m && j<=h)
    {
        if (arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
        
    }
    while (i<=m)
    {
        temp[k]=arr[i];
            i++;
            k++;
    }
    while (j<=h)
    {
        temp[k]=arr[j];
            i++;
            k++;
    }

    for (int s = 0;s < MAX; s++)
    {
        arr[s]=temp[s];
    }
    
    
    
    
}

void MergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int m = (l+h)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+l,h);
        Merge(arr,l,m,h);
    }
    
}

int main()
{
    int arrays[MAX];
    int count;
    
    srand(time(0)); 
    for(int i=0; i<MAX; i++) 
    { 
        arrays[i] = (int) rand()%100+1; 
        printf("\nData ke %d : %d ", i, arrays[i]); 
    } 
    cout<<endl<<endl;

    cout<<"Data sebelum Sorting\n";
    for (int i = 0; i < MAX; i++)
    {
        cout<<arrays[i]<<" ";
    }

    MergeSort(arrays,0,4);
    
    cout<< "\n\nSetelah Sorting : "<<endl;
    for (int i = 0; i < MAX; i++)
    {
        cout<<arrays[i]<<" ";
    }
    
    

    cout<<"\nDengan sorting sebanyak "<<count<<" kali"<<endl<<endl;

}

