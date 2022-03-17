//Nama File: Harga Diskon
//Tanggal:8 Maret 2022
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B

#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Kamus
	int harga,jenis;
//Algoritma
    printf("Harga:");
	scanf("%d",&harga); //HARGA HARUS DIANTARA 200-10000
	printf("Jenis:");
	scanf("%s",&jenis);
	if (harga>200 and harga<10000){
			if (jenis=='A'){printf("Harga Total= %.f", harga-(harga*0.1));}
			else if (jenis=='B'){printf("Harga Total= %.f", harga-(harga*0.15));}
		    else if (jenis=='C'){printf("Harga Total= %.f", harga-(harga*0.2));}
		}
	return 0;
}
