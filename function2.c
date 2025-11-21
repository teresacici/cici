#include <stdio.h>

void pilihan() {
    int pilihan, loop;
    do
    {
        printf("1. Pilihan 1\n");
        printf("2. Pilihan 2\n");
        printf("3. Pilihan 3\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan > 3)
        {
            printf("oalah\n");
            loop = 1;
        }   else {
            printf("Pilihan Anda: %d", pilihan);
            printf("\ngud");
            loop 0;
        }
    } while (loop == 1);  
}

int main() {
    pilihan();
}