//Nama File: TarifPLN
//Tanggal:8 Maret 2022
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B

#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Kamus
	int Daya, Tarif,Gol;
//Algoritma
	printf("Golongan=");
	scanf("%d",&Gol); //GOLONGAN HANYA ADA 1 DAN 2
    printf("Daya=");
	scanf("%d",&Daya);
	if (Gol==1 or Gol==2){
		if (Daya<100) {Tarif=Gol * 1000 *100;}
		else if (Daya>=1000) {Tarif=Gol*1000*Daya*1.1;}
		else  {Tarif=Gol * 1000 *Daya;}
}
	else {printf("Inputan golongan salah\n");}
    printf("Besar Tarif PLN =%d", Tarif);
	return 0;


}
