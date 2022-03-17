//Nama File: Upah Kerja
//Tanggal:8 Maret 2022
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B

#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Kamus
	int Gol, jam,Upah;
//Algoritma
    printf("Gol:");
	scanf("%d",&Gol);
	printf("Jam:");
	scanf("%d",&jam);
	if (Gol>0 and Gol<=4){
		if (jam>0 and jam<=40) {Upah=jam*(1000+(Gol-1)*500);}
		else if (jam>40) {Upah=(40*(1000+(Gol-1)*500))+(1000+(Gol-1)*500)*(jam-40)*3/2;}
    	printf("Upah kerja= %d",Upah);}
    else {printf("Inputan Golongan tidak tepat");}
	return 0;


}
