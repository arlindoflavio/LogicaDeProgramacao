#include <stdio.h>
 
int main() {
 
  int X, Z, cont;

  scanf("%d", &X);
  
  for(cont = 1; cont <= X; cont++){
    Z = cont % 2;
    if(Z == 1)
      printf("%d\n", cont);
  }
  
  return 0;
}