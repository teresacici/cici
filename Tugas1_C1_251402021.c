// ini file revisi cindy yang benar bang
#include <stdio.h>
const float PI = 3.14159;

int main() {
    int rad;
    printf("---------------------------------------------\n");
    printf("Masukkan Jari-jari Lingkaran: ");
    scanf("%d", &rad);
    printf("---------------------------------------------\n");
    
    float luas = PI * rad * rad;
    float keliling = 2 * PI * rad;
    
    printf("Luas dari lingkaran tersebut = %f\n", luas);
    printf("Keliling dari lingkaran tersebut = %f\n", keliling);
    printf("---------------------------------------------\n");
    return 0;
}