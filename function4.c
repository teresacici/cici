#include <stdio.h>

int faktorial(int n) {
  if(n == 0) {
    return 1;
  } else {
    return n * faktorial(n - 1);
  }
}

int main()
{
    int n = 5;
    printf("Faktorial(%d): %d", n, faktorial(n));
}

int fibonacci(int n) {
  if(n == 0) {
    return 0;
  } else if(n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main()
{
    int n = 5;
    print("fibonacci")
}