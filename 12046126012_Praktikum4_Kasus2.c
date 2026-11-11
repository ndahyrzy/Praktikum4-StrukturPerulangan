/*
* Program   : Sistem Penilaian Mahasiswa 
* Nama      : Nida Haya Rizkiyah
* NIM       : 12046126012
* Deskripsi : for loop untuk hitung rata-rata, max, dan min
*/
#include <stdio.h>
int main()
{
    int jumlah_mhs;
    float nilai, total = 0, rata;
    float max = 0, min = 100;

    printf("=== SISTEM PENILAIAN MAHASISWA SI ===\n");
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mhs);

    for (int i = 1; i <= jumlah_mhs; i++){
        printf("Nilai mahasiswa ke-%d: ", i);
        scanf("%f", &nilai);

        total += nilai; // akumulasi total nilai

        if(nilai > max){
            max = nilai;
        }

        if(nilai < min){
            min = nilai;
        }
    }

    rata = total / jumlah_mhs;

    printf("\n=================================\n");
    printf("       LAPORAN NILAI KELAS SI      \n");
    printf("\n=================================\n");
    printf("Jumlah Mahasiswa : %d\n", jumlah_mhs);
    printf("Total Nilai      : %.2f\n", total);
    printf("Rata-rata Kelas  : %.2f\n", rata);
    printf("Nilai Tertinggi  : %.2f\n", max);
    printf("Nilai Terendah   : %.2f\n", min);
    printf("\n=================================\n");

    return 0;
}