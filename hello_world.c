#include <stdio.h>

// Fungsi untuk mengganti nilai dalam array
void gantiNilai(int arr[], int ukuran) {
    int cari, baru;
    int ditemukan = 0;

    printf("\nMasukkan angka yang ingin diganti: ");
    if (scanf("%d", &cari) != 1 || cari <= 0) {
        printf("Input tidak valid! Harus berupa angka positif.\n");
        return;
    }

    // Cari angka dalam array
    for (int i = 0; i < ukuran; i++) {
        if (arr[i] == cari) {
            printf("Masukkan nilai baru: ");
            if (scanf("%d", &baru) != 1 || baru <= 0) {
                printf("Input tidak valid! Harus berupa angka positif.\n");
                return;
            }
            arr[i] = baru;
            printf("Nilai berhasil diganti!\n");
            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan) {
        printf("Angka %d tidak ditemukan dalam array.\n", cari);
    }
}

// Fungsi untuk menampilkan array
void tampilArray(int arr[], int ukuran) {
    printf("[ ");
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

// Fitur tambahan: tampilkan nilai maksimum & minimum
void tampilMaxMin(int arr[], int ukuran) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Nilai maksimum: %d, Nilai minimum: %d\n", max, min);
}

int main() {
    int angka[10] = {5, 12, 8, 20, 15, 3, 9, 18, 25, 30};
    int ukuran = 10;

    printf("Daftar angka awal: ");
    tampilArray(angka, ukuran);

    // Panggil fungsi untuk ganti nilai
    gantiNilai(angka, ukuran);

    printf("\nArray setelah diperbarui: ");
    tampilArray(angka, ukuran);

    // Fitur tambahan
    tampilMaxMin(angka, ukuran);

    return 0;
}