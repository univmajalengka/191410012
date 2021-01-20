#include <iostream>
using namespace std;

int main(){
 int array[100];
 int del,del2,x;
 
 	cout<< ("masukan jumlah angka array :"); 
 	cin >>x;
     for ( int i =0;i<x;i++)
     {
         cout<<"angka ke "<< i + 1 << " : "; 
		 cin>> array[i];
	}
 		 cout <<endl;
		 cout << "angka yang akan dihilangkan:"; 
		 cin >> del;
		 cout << "Data Sekarang : ";
		 
     for(int i=0; i<x; i++)
         if(array[i]== del)
         {
             del2 = del2 + 1;
             }
     else
         {cout << array[i] << " ";
     }
		 cout <<endl;
         cout << "Angka yang hilang :" ;
		 cout<<del<< endl;
     }
 
     
