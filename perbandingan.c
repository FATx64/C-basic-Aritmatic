#include <stdio.h>

int main(void) {
  
  int x = 10;
  int y = 5;

  printf("hasil x < y = %d \n",x < y);
  printf("hasil x > y = %d \n",x > y);
  printf("hasil x kesamaan y = %d \n", x==y);
  printf("hasil dari x >= y = %d \n", x >= y);
  printf("hasil dari x <= y = %d \n", x <=y);
  printf("hasil dari ketidaksamaan x y = %d \n",
  x != y);

  printf("---------------------------- \n");
  printf("hasil dari x == x :%d \n", x==x);
  printf("hasil dari  x != x : %d \n",x != y);

  return 0;
}
