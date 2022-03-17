//Nama File: Biaya Parkir
//Tanggal:8 Maret 2022
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B

#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Kamus
	int parkir;
//Algoritma
	printf("Pakir berapa jam: ");
	scanf("%d",&parkir);
		if (parkir> 0 and parkir<=2){printf("biaya parkir= 2000\n");}
		else if (parkir>2) {printf("biaya parkir= %d",2000+(parkir-2)*500);}
	return 0;
}
