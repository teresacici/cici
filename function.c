#include <stdio.h>

float keliling (float r){
    return 2 * 3.14 * r;
}

int main() {
    printf ("keliling Lingkaran %d: %.2f\n", 1, keliling(5));
    printf ("keliling Lingkaran %d: %.2f\n", 2, keliling(2));
    printf ("keliling Lingkaran %d: %.2f\n", 3, keliling(3));

}