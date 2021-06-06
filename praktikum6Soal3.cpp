#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int A[10] = {12,24,13,25,10,11,21,20,15,18};
int bil, c;

void cari (int bil)  
{
  if (A[c] == bil)
  {
    for (c = 0; c < 10; c++)
    { 
      cout << "Bilangan yang anda cari berada di indeks ke - " << c;
      break;
    }

  }
  else
  {
    for (c = 0; c < 10; c++)
    {
      cout << "Bilangan yang dicari tidak terdaftar";
      break;
    }
  }
  
  
}

int main()
{
  //menampilkan isi elemen array
  for (int i = 0; i < 10; i++)
  {
    cout << "Indeks - [" << i << "]" << " " << A[i] << endl;
  }
  cout << endl;
  cout << "Masukan bilangan yang akan dicari : ";
  cin >> bil;  
  cari (bil);
  cout<<endl;
  
  return 0;
}