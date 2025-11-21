#include <stdio.h>
void tukar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 1;
    int b = 2;
    
    printf("Sebelum: a = %d, b = %d\n", a, b);
    tukar(&a, &b);
    printf("Sesudah: a = %d, b = %d\n", a, b);
    
    return 0;
}