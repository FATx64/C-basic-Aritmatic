#include <stdio.h>

int main() {
  
  int a;

  printf("contoh kondisi if dua kasus \n");
  printf("masukkan nilai a : ");
  scanf("%d",&a);

  if (a >0 ){
    printf("Nilai a lebih besar dari nol %d \n",a);
  }

  else if (a == 0){
    printf("Nilai a sama dengan nol %d \n",a);
  }

  else{
    printf("Wrong input! %d \n",a);
  }

  return 0;


}
