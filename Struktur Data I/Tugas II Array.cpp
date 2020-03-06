#include <iostream>
using namespace std;

int nilai[25];
int a;

int main()
{
	cout<<"Masukkan jumlah nilai yang diinginkan maksimal 25 : ";
	cin>>a;
	cout<<endl;
	for(int b=0;b<=a;b++)
	{
		cout<<"Masukkan nilai yang ke : "<<b<< " : ";
		cin >>nilai[b];
	}
	cout<<endl;
	cout<<"Nilai yang telah dimasukkan : "<<endl;
	for(int b=0;b<=a;b++)
	{
		cout<<"nilai ke-" <<b<< "= "<<nilai[b]<<endl;
	}
	return 0;
}
