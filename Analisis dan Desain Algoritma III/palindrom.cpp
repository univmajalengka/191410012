#include <iostream>
using namespace std;

int main(){
    string kata;
    int a, b;
    bool palindrome = true;
 
    cout << "=======Program Menentukan Kalimat Palindrom=====" << endl;
    do {
		cout << "Input Kata : ";
    	cin>>kata;
    	a = kata.length();
   
		for(b = 0; b < a; b++){
       		if(kata[b] != kata[a-b-1])
       		{
           		palindrome = false;
          		break;
      		}
   		}
    
    	cout << "Result : ";
   		if(palindrome == true)
       		cout << "Kata Palindrom";
    	else
        	cout << "Bukan Kata Palindrom";
        
		cout<<endl;
    }while (b);
    return 0;
}
