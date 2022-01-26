#include <stdio.h>
 
int main() {
 
  int X, Y, Z, cont = 0, soma = 0, aux = 0;

  scanf("%d %d", &X, &Y);
  
  if(X > Y){
    aux = X;
    X = Y;
    Y = aux;
  }

  if((X % 2) == 1 || (X % 2) == (-1)){
    X += 2;
  }
  
  else
    X = X + 1; 
        
  for(cont = X; cont < Y; cont++){
    Z = cont % 2;
    if(Z == 1 || Z == -1){
      soma += cont;
    }
  }
  printf("%d\n", soma);
  
  return 0;
}