
#include <stdio.h>
#define RESET        "\x1b[0m"
#define LIGHT_PINK   "\x1b[38;2;255;182;193m"
#define HOT_PINK     "\x1b[38;5;206m"
#define BIRU_MUDA    "\x1b[1;34m"
#define KUNING_CERAH "\x1b[93m"
#define UNGU_TUA     "\x1b[0;35m"
#define MERAH     "\x1b[31m"

char konversi_nilai(float nilai) 
{

    if (nilai == 4.0)
        return 'A';
    else if (nilai >= 3.0 && nilai < 4.0)
        return 'B';
    else if (nilai >= 2.0 && nilai < 3.0)
        return 'C';
    else if (nilai >= 1.0 && nilai < 2.0)
        return 'D';
    else
        return 'E';
}

int main()
{
    int jumlah;
    printf(KUNING_CERAH "\n============================\n\n");
    printf(LIGHT_PINK "Masukkan jumlah Mahasiswa: ");
    scanf("%d", &jumlah);
    
    float nilai_mahasiswa[jumlah]; 
    float max = 0.0, min = 0.0, total = 0.0;
    
    printf(KUNING_CERAH "\n-------------------------------------");
    printf(KUNING_CERAH "\nDaftar Nilai Mahasiswa Ucu Pacilkom: \n");
    printf(KUNING_CERAH "-------------------------------------\n\n");
    
    int i = 0;
    while (i < jumlah) 
    {
        printf(BIRU_MUDA "================\n");
        printf(HOT_PINK "Mahasiswa Ucu %d:\n", i + 1);
        printf(HOT_PINK "Nilai angka: " BIRU_MUDA);
        int result = scanf("%f", &nilai_mahasiswa[i]);
        
        if (result != 1) {
            printf("Input tidak valid. Silakan masukkan angka yang bener dong!.\n\n");
            while(getchar() != '\n');
            continue; 
        }
        
        if (nilai_mahasiswa[i] < 0.0 || nilai_mahasiswa[i] > 4.0) {
            printf(KUNING_CERAH "Nilai harus antara 0.0 dan 4.0:<. Silakan coba lagi beb.\n\n" RESET);
            continue;
        }
        
        
        printf(HOT_PINK "Nilai huruf: " "%c\n" BIRU_MUDA, konversi_nilai(nilai_mahasiswa[i]));
        
        if (nilai_mahasiswa[i] > max || i == 0) {
            max = nilai_mahasiswa[i];
        }
        
        if (nilai_mahasiswa[i] < min || i == 0) {
            min = nilai_mahasiswa[i];
        }
        
        total += nilai_mahasiswa[i];
        
        i++; 
        printf("================\n");
    }
    
    
    float rata = total / jumlah; 
    printf(UNGU_TUA "Rata-rata nilai: %.2f\n", rata);
    printf("Nilai tertinggi: %.2f (%c)\n", max, konversi_nilai(max));
    printf("Nilai terendah : %.2f (%c)\n", min, konversi_nilai(min));
    
    printf(RESET);
    printf(KUNING_CERAH "\n============================\n\n" RESET);
    return 0;
}