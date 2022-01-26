#include <stdio.h>
 
int main() {
 
  int X, Y, Z, cont, soma = 0, aux = 0;

  scanf("%d %d", &X, &Y);
  
    if(X > Y)
      aux = X;
      X = Y;
      Y = aux;

    if((X % 2) == 1 || (Y % 2) == 1)
        X = X + 1;
        Y = Y - 1;
        
  for(cont = X; cont < Y; cont++){
    Z = cont % 2;
    if(Z == 1)
      soma += cont;
      
  }
  printf("%d\n", soma);
  return 0;
}