#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x, a, t, sisimiring, Keliling, Luas;
	
	cout<<"PROGRAM MENGHITUNG SEGITIGA"<<endl;
	cout<<"Masukkan Alas = ";
	cin>>a;
	
	cout<<"Masukkan Tinggi = ";
	cin>>t;
	
	x=a*a+t*t;
	sisimiring=sqrt(x);
	Luas=a*t;
	Keliling=a+t+sisimiring;
	cout<<"Luas Segitiga adalah = "<<Luas<<endl;
	cout<<"Maka Keliling adalah = "<<Keliling<<endl;
	return 0;
	
}
