#include <stdio.h>

void desc(int n) {
    if (n == 0) {
        return;
    } else {
        printf("%d ", n);
        desc (n - 1);
    }
}

int main()
{
    desc(5);
}