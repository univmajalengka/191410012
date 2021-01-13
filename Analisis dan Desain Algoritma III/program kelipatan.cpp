#include <iostream>
using namespace std;

int a;
string y,x;

int main(){
cout<<"input angka 1-1000 :";
cin>>a;
cout<<"masukan nama dikelipatan 3 -> ";
cin>>y;
cout<<"masukan nama dikelipatan 5 => ";
cin>>x;
for ( int i=1;i<=a;i++)
{
if (i%3==0){
cout<<y<<endl;	
}
if(i%5==0){
cout<<x<< endl;
}
if((i%3!=0) && (i%5!=0))
{
cout<<i<<endl;
}
}
return 0;
}
