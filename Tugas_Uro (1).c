#include <stdio.h>

int penambahan();
int pengurangan();
int perkalian();
int turunan();

int penambahan()
{
  int ar1[100000],x;
  int ar2[100000],y;
  int z;
  //Polynomial yang pertama
  printf("Masukkan derajat polynomial pertama: \n");
  scanf("%d",&x);
  for (int i = 0; i < x+1; i++)
  {
    printf("Masukkan nilai X^%d : ",i);
    scanf("%d",&ar1[i]);
  }
  //Polynomial yang kedua
  printf("Masukkan derajat polynomial kedua: \n");
  scanf("%d",&y);
  for (int i = 0; i < y+1; i++)
  {
    printf("Masukkan derajat polinomial ke-%d : ",i);
    scanf("%d",&ar2[i]);
  }
  //Panjang array penjumlahan
  if (x>y)
    z=x+1;
  else
    z=y+1;
  //Penjumlahan
  int ar3[z];
  for (int i=0; i<z; i++)
  {
    ar3[i] = ar1[i] + ar2[i];
  }
  //Output
  for (int i=0; i<z; i++)
    printf("%+dX^%d ", ar3[z-i-1], z-i-1);
  printf("\n");
}

int pengurangan()
{
  int ar1[100000],x;
  int ar2[100000],y;
  int z;
  //Polynomial yang pertama
  printf("Masukkan derajat polynomial pertama: \n");
  scanf("%d",&x);
  for (int i = 0; i < x+1; i++)
  {
    printf("Masukkan nilai X^%d : ",i);
    scanf("%d",&ar1[i]);
  }
  //Polynomial yang kedua
  printf("Masukkan derajat polynomial kedua: \n");
  scanf("%d",&y);
  for (int i = 0; i < y+1; i++)
  {
    printf("Masukkan derajat polinomial ke-%d : ",i);
    scanf("%d",&ar2[i]);
  }
  //Panjang array pengurangan
  if (x>y)
    z=x+1;
  else
    z=y+1;
  //Pengurangan
  int ar3[z];
  for (int i=0; i<z; i++)
  {
    ar3[i] = ar1[i] - ar2[i];
  }
  //Output
  for (int i=0; i<z; i++)
    printf("%+dX^%d ", ar3[z-i-1], z-i-1);
  printf("\n");
}

int perkalian()
{
  int ar1[100000],x;
  int ar2[100000],y;
  int z;
  //Polynomial yang pertama
  printf("Masukkan derajat polynomial pertama: \n");
  scanf("%d",&x);
  for (int i = 0; i < x+1; i++)
  {
    printf("Masukkan nilai X^%d : ",i);
    scanf("%d",&ar1[i]);
  }
  //Polynomial yang kedua
  printf("Masukkan derajat polynomial kedua: \n");
  scanf("%d",&y);
  for (int i = 0; i < y+1; i++)
  {
    printf("Masukkan derajat polinomial ke-%d : ",i);
    scanf("%d",&ar2[i]);
  }
  //Panjang array Perkalian
  z= x+y+1;
  //Perkalian
  int ar3[z];
  for (int i=0; i<x+1; i++)
  {
    for (int j=0; j<y+1; j++ )
    {
      ar3[i+j] += ar1[i]*ar2[j];
    }
  }

  //Output
  for (int i=0; i<z; i++)
    printf("%+dX^%d ", ar3[z-i], z-i-1);
  printf("\n");
}

int turunan()
{
  int ar1[100000],x;
  //Polynomial yang pertama
  printf("Masukkan derajat polynomial: \n");
  scanf("%d",&x);
  for (int i = 0; i < x+1; i++)
  {
    printf("Masukkan nilai X^%d : ",i);
    scanf("%d",&ar1[x-i]);
  }
  //turunan
  int ar3[x];
  for (int i=0; i<x; i++)
  {
    ar3[i]= ar1[i]*(x-i);
  }

  //Output
  for (int i=0; i<x; i++)
    printf("%+dX^%d ", ar3[i], x-i-1);
  printf("\n");


}


int main()
{
  int kode;
  printf("Kode operasi: \n 1. Penjumlahan \n 2. Pengurangan \n 3. Perkalian \n 4. Turunan \n");
  printf("Masuukan kode operasi: ");
  scanf("%d", &kode);

  switch (kode)
  {
    case 1:
      penambahan();
      break;
    case 2:
      pengurangan();
      break;
    case 3:
      perkalian();
      break;
    case 4:
      turunan();
      break;
    default:
      printf("Maaf menu tidak tersedia, silahkan pilih menu yang tersedia!\n");
      break;
  }


}
