
#include <stdio.h>

int main() {
    int a = 4, b = 6, x = 3, y = 7;

    printf("(*) -15\n");
    printf("(*) 8+17\n");

    printf("(*) a = b + 5\n");
    printf("    a = %d + 5 = %d\n", b, a = b + 5);

    printf("(*) x = ++y %% 3\n");
    printf("    x = ++%d %% 3 = %d\n", y, ++y % 3);

    printf("(*) (x >= 0) || ((x %% 2) == 0)\n");
    printf("    (%d >= 0) || ((%d %% 2) == 0) = %d\n", x, x, (x >= 0) || ((x % 2) == 0));

    printf("(*) 6 + (c = 3 + 8) - (d = 1 + 3)\n");
    int c, d;
    printf("    6 + (c = 3 + 8) - (d = 1 + 3) = %d\n", 6 + (c = 3 + 8) - (d = 1 + 3));

    printf("(*) (x + (((y / z) * 10) / 2))\n");
    int z = 4;
    printf("    (%d + (((%d / %d) * 10) / 2)) = %d\n", x, y, z, (x + (((y / z) * 10) / 2)));

    printf("(*) (((x + y) / z) * 10) / 2\n");
    printf("    (((%d + %d) / %d) * 10) / 2 = %d\n", x, y, z, (((x + y) / z) * 10) / 2);

    printf("(*) x + y / z * 10 / 2 \n");
    printf("    %d + %d / %d * 10 / 2 = %d\n", x, y, z, x + y / z * 10 / 2);

    printf("(*) x + (((y / z) * 10) / 2) \n");
    printf("    %d + (((%d / %d) * 10) / 2) = %d\n", x, y, z, x + (((y / z) * 10) / 2));

    return 0;
}
