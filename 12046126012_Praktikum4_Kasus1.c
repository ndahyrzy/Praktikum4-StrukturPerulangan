/*
* Program   : Mencetak Pola Segitiga Bintang
* Nama      : Nida Haya Rizkiyah
* NIM       : 12046126012
* Deskripsi : Nested for loop untuk pola segitiga bintang
*/
#include <stdio.h>
int main()
{
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukkan jumlah baris: ");
    scanf("%d", &N);

    //loop luar: mengatur baris (1 - N)
    for (int i = 1; i <= N; i++) {
        //loop dalam: cetak bintang sebanyak i
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n"); //pindah ke baris baru
    }

    return 0;
}