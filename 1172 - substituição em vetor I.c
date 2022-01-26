#include <stdio.h>
#define MAX 9

int main() {

  int X[MAX], x, i = 0;

  while(i < 10){
    scanf("%d", &x);
    if(x <= 0)
      x = 1;

    if(x > 0)
      x = x;

    printf("X[%d] = %d\n", i, x);

    i++;
  }
    
  return 0;
}