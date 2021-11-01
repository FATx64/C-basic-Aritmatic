#include <stdio.h>

int main() {
  
  int uang = 6000;
  int hujan = 0; /* hujan = false */

  /*program*/
  printf("Uang > 5000 dan tidak hujan: %d \n",(uang>5000)&&(!hujan));

  /*kondisi hujan = true */
  uang = 6000;
  hujan = 1;
  printf("Uang >5000 dan tidak hujan : %d \n", (uang>5000)&&(!hujan));


}
