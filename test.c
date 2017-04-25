#include <stdio.h>

int main(void){
  int a, b, i;
  printf("Hello World\n");
  a = 3;
  for (i=0,i<5,i++){
    b = a * i;
    printf("%d\n", b);
  }
  return 0;
}
