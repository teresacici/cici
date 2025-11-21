#include <stdio.h>

int main() {
    char nama[10];
    int nilai;
    FILE *file;

    file = fopen("file.txt", "r");
    while(scanf(file, "%s %d", nama, &nilai) != EOF) {
        printf("%d %s\n", nilai, nama);
    }
    fclose(file);

    return 0;
}