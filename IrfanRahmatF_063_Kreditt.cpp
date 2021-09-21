#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float Harga_Motor,Lama_Kredit,Harga_Pokok,Bunga_Kredit,Cicilan,Total_Harga_Motor,Keuntungan_Dealer;
	cout<<"                           Program Untuk Mengetahui Kredit Motor"<<endl;
	
	cout<<" Masukkan Harga Motor =";
	cin>>Harga_Motor;
	cout<<" Masukkan Lama Kredit (Bulan) =";
	cin>>Lama_Kredit;
	
	Harga_Pokok=Harga_Motor/Lama_Kredit;
	Bunga_Kredit=Harga_Pokok*0.1;
	Cicilan=Harga_Pokok+Bunga_Kredit;
	Total_Harga_Motor=Cicilan*Lama_Kredit;
	Keuntungan_Dealer=Total_Harga_Motor-Harga_Motor;
	cout<<"Keuntungan Dealer Motor ="<<Keuntungan_Dealer<<endl;
	
	return 0;
}
