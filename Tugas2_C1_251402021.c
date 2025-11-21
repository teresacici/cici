#include <stdio.h>

int main () {

    const int hargaPerJam = 100000;
    float diskon = 0.0;
    int jumlahJam, totalHargaAwal;
    float totalDiskon, hargaSetelahDiskon;

    printf ("jumlah jam yang dibeli: ");
    scanf ("%d", &jumlahJam);
    
    totalHargaAwal = jumlahJam * hargaPerJam;

    if (jumlahJam > 7) {
    diskon = 0.5;
    }
    else if (jumlahJam >= 5) {
    diskon = 0.3;
    }
    else if (jumlahJam >= 2) {
    diskon = 0.2;
    }

    totalDiskon = totalHargaAwal * diskon;
    hargaSetelahDiskon = totalHargaAwal - totalDiskon;

    printf ("--------- Detail Pembelian ----------\n");
    printf ("Jumlah jam dibeli         : %d\n", jumlahJam);
    printf ("Total harga awal          : Rp %d\n", totalHargaAwal);
    printf ("Harga diskon yang didapat : Rp %.0f\n", totalDiskon);
    printf ("Harga setelah diskon      : Rp %.0f\n", hargaSetelahDiskon);
    printf ("-------------------------------------\n");

    return 0;
}