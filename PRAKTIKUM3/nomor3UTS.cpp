//Nama File: Nomor 3
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
	int i,N,jarak, Kecil, Besar;

    //Algoritma
    printf("Selisih Ketinggian \n");
    scanf("%d", &N);
    int T[N];

    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    Besar = T[0];
    Kecil = T[0];

    for (i = 0; i < N; i++) if (T[i] > Besar) Besar = T[i];

    for (i = 0; i < N; i++) if (T[i] < Kecil) Kecil = T[i];

    jarak = Besar-Kecil;
    printf("%d", jarak);
    return 0;
}
