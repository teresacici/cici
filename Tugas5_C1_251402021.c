#include <stdio.h>
#define RESET     "\x1b[0m"
#define MERAH     "\x1b[31m"

void gantiNilai(int arr[], int ukuran) {
    int cari, baru;
    int ditemukan = 0;

    char konfirmasi;
    printf("apakah kamu mau ganti salah satu dari angka diatas? (y/n): ");
    scanf("%c", &konfirmasi);
    if (konfirmasi == 'y' || konfirmasi == 'Y') {
        printf("\nMasukkan angka yang ingin diganti: ");
    } else if (konfirmasi == 'n' || konfirmasi == 'N') {
        printf("\nyauda jangan disini, bye!\n");
        return;
    } else {
        printf ("\npilihannya cuma y or n, bye!\n");
        return;
    }
    if (scanf("%d", &cari) != 1 || cari <= 0) {
        printf("\nADUH ERROR: Input tidak valid! Harus angka positif.\n");
        return;
    }
    

    for (int i = 0; i < ukuran; i++) {
        if (arr[i] == cari) {
            printf("\nMasukkan nilai baru: ");
            if (scanf("%d", &baru) != 1 || baru <= 0) {
                printf("OMG ERROR: Input tidak valid hm:c Harus angka positif ya..\n");
                return;
            } 
        
            printf("\nKamu yakin mau mengubah nilai %d menjadi %d? (y/n): ", cari, baru);
            char konfirmasi;
            scanf(" %c", &konfirmasi);

            if (konfirmasi == 'y' || konfirmasi == 'Y') {
            arr[i] = baru;
                printf("\nNilai %d berhasil diganti menjadi %d!\n", cari, baru);
            } else {
                printf("\nPerubahan dibatalkan. Nilai tetap %d.\n", cari);
            }
            ditemukan = 1;
            break;
        }
    }


   if (!ditemukan) {
        printf("\nhm angka %d tidak ditemukan dalam array, maaf ya.\n", cari);
    }
}

void tampilArray(int arr[], int ukuran) {
    printf(MERAH "\n------ DAFTAR NILAI ARRAY ------\n" RESET);
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", arr[i]);
    }
    printf(MERAH "\n--------------------------------\n\n" RESET);
}

int main() {
    int angka[10] = {30, 9, 6, 16, 1, 74, 17, 7, 75, 15};
    int ukuran = 10;
    tampilArray(angka, ukuran);
   
    gantiNilai(angka, ukuran);
    printf("\nArray setelah diperbarui: \n");
    tampilArray(angka, ukuran);

    return 0;
}