#include <stdio.h>

int main () {
   int arr[4];
   for(int i = 0; i < 4; i++){
       printf("input array[%d]: ", i);
       scanf("%d", &arr[i]);
   }
   printf("element array: \n");
   for(int i = 0; i < 4; i++){
       printf("%d ",arr[i]);
   }
   return 0;
}