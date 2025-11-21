#include <stdio.h> 

int main(){
    int tinggi;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    if (tinggi <=0) {
        printf("Bilangan dari tinggi segitiga harus positif!\n");
        return 0;
    }

    for(int i = 1; i <= tinggi; i++) {
        for(int j = 1; j <= tinggi - i; j++) {
            printf(" "); 
        }
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}
