/*
* Program   : Menu aplikasi kasir minimarket
* Nama      : Nida Haya Rizkiyah
* NIM       : 12046126012
* Deskripsi : Do-while untuk menu + switch-case untuk pilihan
*/
#include <stdio.h>
int main()
{
    int pilihan;
    float harga, jumlah, subtotal;
    float total_belanja = 0;

    printf("=== APLIKASI KASIR MINIMARKET SI ===\n");

    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. Tambah Belanja\n");
        printf("2. Lihat Total Belanja\n");
        printf("3. Bayar & Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan){
            case 1:
                printf("\n-- Tambah Belanja --\n");
                printf("Harga barang : Rp ");
                scanf("%f", &harga);
                printf("Jumlah beli  : ");
                scanf("%f", &jumlah);
                subtotal = harga * jumlah;
                total_belanja += subtotal;
                printf("Subtotal    : Rp %.2f\n", subtotal);
                printf("Total belanja sementara: Rp %.2f\n", total_belanja);
                break;
            case 2:
                printf("\nTotal belanja sementara: Rp %.2f\n", total_belanja);
                break;
            case 3:
                printf("\n=== PEMBAYARAN ===\n");
                printf("\nTotal yang harus dibayar: Rp %.2f\n", total_belanja);
                printf("Terima kasih telah berbelanja!\n");
                break;
            default: 
                printf("\nERROR: Menu tidak tersedia. Pilih 1-3 saja.\n");
        }
    }while (pilihan != 3);

    return 0;
}