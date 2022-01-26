#include <stdio.h>

int main() {

  int cont, x = 0;

  for(cont = 1; cont <= 100; cont++){
    x = cont % 2;
    if(x == 0)
      printf("%d\n", cont);
  }

  return 0;
}