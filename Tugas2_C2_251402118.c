#include <stdio.h>
#include <windows.h> // buat Sleep()

void delay(int ms) {
    Sleep(ms);
}

void printSlow(char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        Sleep(30);
    }
}

void loadingBar() {
    printf("\n\033[1;34mLagi mikir dulu bentar ya");
    for (int i = 0; i < 5; i++) {
        printf(".");
        fflush(stdout);
        Sleep(400);
    }
    printf("\033[0m\n");
}

int main() {
    int jumlah_jam;
    float harga_jam = 100000;
    float total_awal, diskon, total_akhir;

    printf("\033[1;33mBerapa sih jumlah jam yang dibeli?: \033[0m");
    scanf("%d", &jumlah_jam);
    getchar(); // biar Enter dari scanf gak nyangkut

    total_awal = jumlah_jam * harga_jam;

    if (jumlah_jam == 1) {
        diskon = 0;
    } else if (jumlah_jam >= 2 && jumlah_jam <= 4) {
        diskon = 0.2;
    } else if (jumlah_jam >= 5 && jumlah_jam <= 7) {
        diskon = 0.3;
    } else if (jumlah_jam > 7) {
        diskon = 0.5;
    } else {
        diskon = 0; 
    }

    total_akhir = total_awal - (total_awal * diskon);

    printSlow("\n\033[1;36mMau lihat total harga awal? Tekan Enter yaw...\033[0m");
    getchar();
    loadingBar();
    printf("\nTotal harga awal: \033[1;32mRp%.0f\033[0m\n", total_awal);

    printSlow("\n\033[1;35mKepo ya berapa diskonnya? Enter lagieh...\033[0m");
    getchar();
    loadingBar();
    printf("Diskon kamu dapet: \033[1;33m%.0f%%\033[0m\n", diskon * 100);

    printSlow("\n\033[1;34mEnter lagi kuyy, asli ini terakhir...\033[0m");
    getchar();
    loadingBar();
    printf("Total harga setelah diskon: \033[1;32mRp%.0f\033[0m\n", total_akhir);

    delay(500);
    printSlow("\n\033[1;36mMakasih udah beli yaa, semoga jamnya awet ???\033[0m\n");

    return 0;
}