#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
	float Nilai_Praktikum,Nilai_Teori,Nilai_Tugas_Dan_FinalProjek,Rata_Rata;
	cout<<"Program utuk menghitung nilai rata-rata dari mata kuliah pemrograman terstruktur"<<endl;
	
	cout<<"Masukkan Nilai Praktikum =";
	cin>>Nilai_Praktikum;
	cout<<"Masukkan Nilai Teori =";
	cin>>Nilai_Teori;
	cout<<"Masukkan Nilaii Tugas Final Projek =";
	cin>>Nilai_Tugas_Dan_FinalProjek;
	
	Rata_Rata=(Nilai_Praktikum*0.4)+(Nilai_Teori*0.4)+(Nilai_Tugas_Dan_FinalProjek*0.2);
	cout<<"Nilai Rata-Rata Dari Mata Kuliah Pemrograman Terstruktur ="<<Rata_Rata<<endl;
	return 0;
}
