
#include <iostream>
#include <time.h>
#define MAX 10
using namespace std;

void QuickSort(int arr[], int s, int e);
int Partition(int arr[], int s, int e);


void QuickSort(int arr[], int s, int e,int &count)
{
    for (int m = 0; m < MAX; m++)
    {
        cout<<arr[m]<<" "; 
    }
    cout<<endl;
    count++;
    if(s<e)
    {
        int p = Partition(arr,s,e);
        QuickSort(arr,s,(p-1),count);
        count++;
        QuickSort(arr,(p+1),e,count);
        count++;
    }
}

int Partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pIndex = s;

    for(int i=s; i<e; i++)
    {
        if(arr[i]<pivot)
        {
            int temp = arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]= temp;
            pIndex++;
        }
    }

    int temp = arr[e];
    arr[e]= arr[pIndex];
    arr[pIndex]=temp;

    return pIndex;
}

void PrintArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    cout<<endl;
    
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

    cout<< "Sebelum Sorting : "<<endl;
    for(int i=0;i<MAX;i++)
    {
        cout<<arrays[i]<< " ";
    }
    cout<<endl;

    cout<<"\nProses Sorting\n";
    QuickSort(arrays,0,(MAX-1),count);

    cout<< "\n\nSetelah Sorting : "<<endl;
    for(int i=0;i<MAX;i++)
    {
        cout<<arrays[i]<< " ";
    }
    cout<<"\nDengan sorting sebanyak "<<count<<" kali"<<endl<<endl;

    

    return 0;
}
