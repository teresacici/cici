#include <stdio.h>

int main (void) {
    int suhu;

    printf("Masukkan besarnya suhu: ");
    scanf("%d", &suhu);

    /*Melakukan pengecekan pada suhu*/
    if (suhu <=0) {
        printf("\nPada suhu %d derajat Celcius, air akan berwujud \" padat (es)\"", suhu);
    } else if ((suhu > 0) && (suhu < 100)) {
     printf ("\nPada suhu %d derajat Celcius, air akan berwujud \"cair\"", suhu);
    } else {
        printf ("\nPada suhu %d derajat Celcius, air akan berwujud \"gas\"", suhu);
    }

    return 0;
}