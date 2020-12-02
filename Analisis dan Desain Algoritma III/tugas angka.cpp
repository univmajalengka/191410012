#include <iostream>
using namespace std;

int nilai[7];
int a;
int y = 1000000;
int f = 0;

int main()
{
	cout<<"Masukkan angka 7 ! untuk memulai : ";
	cin>>a;
	cout<<endl;
	for(int b=1;b<=a;b++)
	{
		cout<<"Masukkan nilai ke : "<<b<< " : ";
		cin >>nilai[b];
	}
	cout<<endl;
	for(int b=1;b<=a;b++)
	{
		for(int i=1; i<7; i++) {
		f = nilai[i]*y;
		cout<<f<<endl;
		y = y/10;
	}
	}
	return 0;
}
