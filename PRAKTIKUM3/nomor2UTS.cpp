//Nama File: Nomor 2
//Pembuat: Nadiyya Hasaniyyah
//NIM:24060121120030
//Kelas: B
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
	int i,j,N,NBArray;

    //Algoritma
    printf("Membuat Program Menghitung Array\n");
    printf("Masukan nilai N : ");
    scanf("%d", &N);
    int T[N];
    NBArray = 0;

    for (i = 0; i <= N; i++) scanf("%d", &T[i]);

    for (i = 0; i <= N; i++) {
        for (j = i; j < N; j++) {
            NBArray += T[j];
        }
    }
    printf("%d", NBArray);
    return 0;
}
