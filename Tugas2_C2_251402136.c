#include <stdio.h>

int main () {
    int JumlahBanyakJam;
    float HargaSatuan = 100000;
    float TotalAwal, Diskon, TotalBayar;
    float PersenDiskon = 0;

    printf("==================================================\n");
    printf("                TOKO DIGIDAW JAM                  \n");
    printf("==================================================\n");
    printf("Masukkan Jumlah Jam Yang Dibeli: ");
    scanf("%d", &JumlahBanyakJam);
    fflush(stdin);

    TotalAwal = JumlahBanyakJam * HargaSatuan;

    if (JumlahBanyakJam == 1) {
        PersenDiskon = 0;
    } else if (JumlahBanyakJam >= 2 && JumlahBanyakJam <= 4) {
        PersenDiskon = 0.2;
    } else if (JumlahBanyakJam >= 5 && JumlahBanyakJam <= 7) {
        PersenDiskon = 0.3;
    } else if (JumlahBanyakJam > 7) {
        PersenDiskon = 0.5;
    }

    Diskon = TotalAwal * PersenDiskon;
    TotalBayar = TotalAwal - Diskon;

    printf("\n==================================================\n");
    printf("                STRUK PEMBAYARAN                  \n");
    printf("==================================================\n");
    printf("Jumlah Jam yang Dibeli         : %d\n", JumlahBanyakJam);
    printf("Harga Satuan                   : Rp %.0f\n", HargaSatuan);
    printf("--------------------------------------------------\n");
    printf("Total Harga Awal               : Rp %.0f\n", TotalAwal);
    printf("Diskon (%.0f%%)                 : Rp %.0f\n", PersenDiskon * 100, Diskon);
    printf("--------------------------------------------------\n");
    printf("Total yang Harus Dibayar       : Rp %.0f\n", TotalBayar);
    printf("==================================================\n");
    printf("   TERIMA KASIH SUDAH BERBELANJA DI TOKO DIGIDAW! \n");
    printf("==================================================\n");

    return 0;
}