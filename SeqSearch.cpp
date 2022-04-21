/*Nama File 	: searching.cpp*/
/*Deskripsi 	: searching*/
/*Pembuat   	: 24060121120030 Nadiyya Hasaniyyah*/

#include <stdio.h> /*header file*/

void seqSearch(int Arr[], int N,int *iX, int X);

/*Program Utama*/
int main()
{
    /*Kamus*/
    int Arr[] = {2,4,6,8,9,10,11,19,10,18};
    int N = sizeof(Arr)/sizeof(Arr[0]);
    int X = 18;
    int iX;
    
    /*Algoritma*/
    seqSearch(Arr,N,&iX, X);
    if(iX== -1){
        printf("Elemen tidak ditemukan");
    }
    else{
        printf("Elemen ditemukan pada index ke %d\n", iX);
    }

}

void seqSearch(int Arr[], int N, int *iX, int X)
{
    /*Kamus Lokal*/
    int i; /*Counter*/

    /*Algoritma*/
    i = 1;
    while(i < N && Arr[i-1] != X){ 
        printf("%d\n", i);
        i++;
    }
    if(Arr[i-1] == X){
        *iX=i;
    }
    else{
        *iX= -1;
    }
}


