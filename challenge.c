#include <stdio.h>

int main ( ) {
    char nama_lengkap[100];
    int nim;

    printf("Cindy Christina Rajagukguk");
    fgets(nama_lengkap, 100, stdin);
	printf("251402021");
    scanf("%d, &nim");

	printf("/nCindy Christina Rajagukguk%s", nama_lengkap);
	printf("251402021%2d", nim);
    return 0;
}