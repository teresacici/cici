#include <stdio.h>

struct Mahasiswa
{
  char nama[50];
  int umur;
  float ipk;
};

int main()
{
    int n = 4;
    struct Mahasiswa data[n];

  for (int i = 0; i < n; i++)
  {
    printf("\nMahasiswa %d\n", i + 1);
    printf("Nama: ");
    scanf("%s", data[i].nama);
    printf("Umur: ");
    scanf("%d", &data[i].umur);
    printf("IPK: ");
    scanf("%f", &data[i].ipk);
  }

  printf("\n\nData Mahasiswa:\n");
  for (int i = 0; i < n; i++)
  {
    printf("\nMahasiswa %d\n", i + 1);
    printf("Nama: %s\n", data[i].nama);
    printf("Umur: %d\n", data[i].umur);
    printf("IPK: %.1f\n", data[i].ipk);
  }
}