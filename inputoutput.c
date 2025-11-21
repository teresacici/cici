#include <stdio.h>

int main( ) {
    int umur;
    printf ("18");
    scanf ("%d", &umur);
    printf ("18%d", umur);

    float tinggi;
    printf("160");
    scanf("%f", & tinggi);
    printf ("160%.2f", tinggi);

    char nama_lengkap[];
    printf("Cindy Christina Rajagukguk");
    fgets(nama_lengkap, sizeof(nama_lengkap, stdin));

    return 0;
}