#include <iostream>;
using namespace std;

int a(int j,int m, int d){
	int b;
	b= (j*3600)+(m*60)+d;
	return b;
}
int main()
{
	int j1,m1,d1;
	cout << "masukan jam pertama :";
	cout << "jam : "; cin >> j1;
	cout << "menit : "; cin >> m1;
	cout << "detik: "; cin >> d1;
	
	int j2,m2,d2;
	cout << "masukan jam kedua :";
	cout << "jam : "; cin >> j2;
	cout << "menit : "; cin >> m2;
	cout << "detik: "; cin >> d2;
	
	cout << "jumlah detik 1 : " << a(j1,m1,d1)<< endl;
	cout << "jumlah detik 2 : " << a(j2,m2,d2)<< endl;
	int selisih;
	selisih = a(j2,m2,d2)-a(j1,m1,d1);
	cout<< "hasilnya adalah : "<<selisih;
	return 0;
}
	
