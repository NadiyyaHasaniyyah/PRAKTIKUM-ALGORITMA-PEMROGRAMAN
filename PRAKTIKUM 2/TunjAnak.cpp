//Nama File: TunjAnak
//Tanggal:8 Maret 2022
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B

#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Kamus
	int A,G,T;
//Algoritma
    printf("Jumlah Anak=");
	scanf("%d",&A);
	printf("Gaji Pokok=");
	scanf("%d",&G);
	if (A<=3) {T=A*(0.1*G);}
	else {T=3*(0.1*G);}
    printf("Besar Tunjangan Anak =%d", T);
	return 0;


}
