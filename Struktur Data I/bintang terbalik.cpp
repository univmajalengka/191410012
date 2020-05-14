#include<iostream>
using namespace std;
int main()
{
for(int a=6;a>=1;a--){
	for( int b=1;b<a;b++){
		cout << " ";
			}
	for(int c=6;c>=a;c--){
		cout << "*";
	}
	cout<<endl;
	}
}
