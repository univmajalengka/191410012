#include <iostream>
using namespace std;

struct waktu
{
  int detik;
  int menit;
  int jam;
};

void waktu_turun(struct waktu, struct waktu, struct waktu *);

int main()
{
    struct waktu t1, t2, turun;

    cout << "SELISIH DUA WAKTU" << endl;
    cout << "-----------------" << endl;
    cout << "Masukan Waktu pertama" << endl;
    cout <<"jam :";cin >> t1.jam;
    cout <<"menit :";cin>> t1.menit;
    cout <<"detik :";cin>> t1.detik;

    cout << "Masukan Waktu kedua" << endl;
    cout <<"jam :";cin >> t2.jam;
    cout <<"menit :";cin>> t2.menit;
    cout <<"detik:";cin>> t2.detik;
  

    waktu_turun(t1, t2, &turun);

    cout << endl << "Selisih kedua waktu tersebut adalah : " << t1.jam << ":" << t1.menit << ":" << t1.detik;
    cout << " - " << t2.jam << ":" << t2.menit << ":" << t2.detik;
    cout << " = " << turun.jam << ":" << turun.menit << ":" << turun.detik;
    return 0;
}
void waktu_turun(struct waktu t1, struct waktu t2, struct waktu *turun){
   
    if(t2.detik > t1.detik)
    {
        --t1.menit;
        t1.detik += 60;
    }

    turun->detik = t1.detik - t2.detik;
    if(t2.detik > t1.detik)
    {
        --t1.jam;
        t1.menit += 60;
    }
    turun->menit = t1.menit-t2.menit;
    turun->jam = t1.jam-t2.jam;
return;
}
