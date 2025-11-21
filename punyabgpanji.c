#include <stdio.h>

void gantiNilai(int arr[], int ukuran) {
    int cari, baru;
    int ditemukan = 0;

    printf("\nMasukkan angka yang ingin diganti: ");
    if (scanf("%d", &cari) != 1 || cari <= 0) {
        printf("ADUH ERROR: Input tidak valid! Harus angka positif.\n");
        return;
    }

    for (int i = 0; i < ukuran; i++) {
        if (arr[i] == cari) {
            printf("Masukkan nilai baru: ");
            if (scanf("%d", &baru) != 1 || baru <= 0) {
                printf("OMG ERROR: Input tidak valid hm:c Harus angka positif ya..\n");
                return;
            }

            
            char konfirmasi;
            printf("Kamu yakin mau mengubah nilai %d menjadi %d? (y/n): ", cari, baru);
            scanf(" %c", &konfirmasi);

            if (konfirmasi == 'y' || konfirmasi == 'Y') {
                arr[i] = baru;
                printf("Nilai %d berhasil diganti menjadi %d!\n", cari, baru);
            } else {
                printf("Perubahan dibatalkan. Nilai tetap %d.\n", cari);
            }

            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan) {
        printf("hm angka %d tidak ditemukan dalam array.\n", cari);
    }
}

void tampilArray(int arr[], int ukuran) {
    printf("\n------ DAFTAR NILAI ARRAY ------\n");
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n--------------------------------\n");
}

int main() {
    int angka[10] = {30, 9, 6, 16, 1, 74, 17, 7, 75, 15};
    int ukuran = 10;

    tampilArray(angka, ukuran);
    gantiNilai(angka, ukuran);

    printf("\nArray setelah diperbarui:");
    tampilArray(angka, ukuran);

    return 0;
}