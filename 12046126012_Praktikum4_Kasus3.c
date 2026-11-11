/*
* Program   : Game tebak angka
* Nama      : Nida Haya Rizkiyah
* NIM       : 12046126012
* Deskripsi : while loop untuk game tebak angka dengan petunjuk
*/
#include <stdio.h>
int main()
{
   const int ANGKA_RAHASIA = 73;
   int tebakan = 0;
   int jumlah_coba = 0;

   printf("=== Game Tebak Angka ===\n");
   printf("Saya punya angka rahasia antara 1-100.\n");
   printf("Coba tebak!\n\n");

   while (tebakan != ANGKA_RAHASIA){
    printf("Masukkan Tebakan Anda: ");
    scanf("%d", &tebakan);
    jumlah_coba++;

    if(tebakan < ANGKA_RAHASIA){
        printf("Tebakan terlalu KECIL! Coba lagi.\n\n");
    }else if(tebakan > ANGKA_RAHASIA){
        printf("Tebakan terlalu BESAR! Coba lagi.\n\n");
    }else{
        printf("\n*** SELAMAT! Anda benar! ***\n");
        printf("Angka rahasinya adalah: %d\n", ANGKA_RAHASIA);
    }
   }

   printf("\nAnda menebak sebanya %d kali.\n",jumlah_coba);
   printf("Terima Kasih sudah bermain!\n");

   return 0;
}