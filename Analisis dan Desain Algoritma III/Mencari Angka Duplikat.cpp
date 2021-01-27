#include <iostream>
using namespace std;
 
int main()
{
int jumlah, tmp,a;
int arr1[100] ;

cout <<"========Program memcari Angka Duplikat======== " << endl;
cout<< " masukan angka 1-100 : ";
cin>>a;
cout<<endl;
for(int b=1;b<=a;b++)
	{
		cout<<"Masukkan nilai yang ke : "<<b<< " : ";
		cin >>arr1[b];
	}
	
cout<<endl;
cout <<"Kumpulan Data:"<<endl;
for(int h=1; h<=a; h++)
	{
	for(int i=h+1; i<=a; i++)
	{
	if(arr1[h] > arr1[i])
	{
	tmp = arr1[i];
	arr1[i] = arr1[h];
	arr1[h] = tmp;
		}
	}
	cout << arr1[h] << " ";
}

cout <<endl;
cout <<"Banyak Angka Duplikat Data : " << endl;
for(int h=1; h<=a; h++){
	jumlah = 0;
	for(int i=0; i<=a; i++){
	if(arr1[h] == arr1[i])
	jumlah++;
	}
	if(arr1[h] != arr1[h-1])
	cout <<"Nilai :"<< arr1[h] << " : Jumlah Duplikat : " << jumlah <<endl;
	}
return 0;
}

