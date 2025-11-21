#include <stdio.h>

void gantiAngka(int arr[], int size, int angkaLama, int angkaBaru) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == angkaLama) {
            arr[i] = angkaBaru;
            printf(" Nilai %d berhasil diganti menjadi %d!\n", angkaLama, angkaBaru);
            return;
        }
    }
}

int main() {
    int arr[10] = {1, 9, 17, 67, 90, 45, 22, 12, 54, 78};
    int size = 10;
    int pilihan, angkaBaru;
    char ulang;

    do {
        printf("\n===== Daftar Angka dalam Array =====\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n------------------------------------\n");

        printf("Pilih angka yang ingin diganti: ");
        if (scanf("%d", &pilihan) != 1 || pilihan <= 0) {
            printf(" ERROR: Input harus angka positif!\n");
            while (getchar() != '\n'); 
            continue;
        }

        int index = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == pilihan) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            printf(" Angka %d tidak ditemukan di array!\n", pilihan);
        } else {
            printf("Angka ditemukan di index [%d].\n", index);

            printf("Masukkan nilai baru: ");
            if (scanf("%d", &angkaBaru) != 1 || angkaBaru <= 0) {
                printf(" ERROR: Nilai baru tidak valid!\n");
                while (getchar() != '\n');
                continue;
            }

            printf("Yakin ingin mengganti %d dengan %d? (y/n): ", pilihan, angkaBaru);
            char konfirmasi;
            scanf(" %c", &konfirmasi);

            if (konfirmasi == 'y' || konfirmasi == 'Y') {
                gantiAngka(arr, size, pilihan, angkaBaru);
            } else {
                printf(" Perubahan dibatalkan.\n");
            }
        }

        printf("\nArray terbaru: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }

        printf("\nIngin mengubah lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("\n Program selesai. Terima kasih!\n");
    return 0;
}