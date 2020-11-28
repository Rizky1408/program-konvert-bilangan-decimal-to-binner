//Program Konversi Bilangan decimal to binner

#include <iostream>
#include <conio.h>

using namespace std;

//Variabel Global antar fungsi
unsigned int a,b;


void konversi (unsigned int a){

//Deklarasi fungsi untuk algoritma pertama

if (a>1) 
{
    konversi(a/2);
}

b = a % 2;
cout << b <<" ";

}

int main () 
{
	
	cout <<"\t\t Nama    :Rizky Adi Ryanto\n"
	     <<"\t\t Nim     :**********\n"
	     <<"\t\t Prodi   :Teknik Informatika\n"
	     <<"\n\n";
	     
	cout <<"\t\t Program Konversi Bilangan Decimal to Binner";
	cout <<"\n\n";
	

//Algoritma pertama

cout << "Masukkan bilangan desimal yang ingin Di konversikan :";
cin >> a;

konversi(a);

cout << endl << endl;

getch();
return 0;

}
