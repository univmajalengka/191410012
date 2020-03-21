#include<iostream>
using namespace std;
int main ()
{
	int x[4][4][2] = 	{ {10,9,8,7}, {5,4,3,2}, {1,11} };
	int y[4][4][2] = 	{ {10,9,8,7}, {5,4,3,2}, {1,11} };
	int z[4][4][2];
	
	for(int a=0;a<4;a++){
		for(int b=0;b<4;b++)
			for(int c=0;c<2;c++){
			z[a][b][c]=x[a][b][c]+y[a][b][c];
		}
	}
	
	for(int a=0;a<4;a++){
		for(int b=0;b<4;b++)
			for(int c=0;c<2;c++){
			cout << z[a][b][c]<< " ";
		}
		cout << endl;
	}
}
