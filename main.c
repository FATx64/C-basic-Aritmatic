#include <stdio.h>

int main(void) {
  /*kamus*/
  int a = 5;
  int b = 10;

  /*program bilangan desimal*/
  printf("Hasil dari a + b = %d \n", a + b);
  printf("Hasil dari a - b = %d \n", a - b);
  printf("Hasil dari a * b = %d \n", a * b);
  printf("Hasil dari a / b = %d \n", a / b);
  printf("Hasil dari a mod b = %d \n", a % b);

  /*bilangan rill*/
  printf("--------------------------------- \n");

  float c =5;
  float d=10;
  printf("Hasil dari a / b = %f \n",c / d);
  printf("hasil dari b / a = %f \n", d / c);
  printf("hasil dari a + b = %f \n", c + d);
  printf("hasil dari a * b = %f \n", c * d);


  return 0 ;

}