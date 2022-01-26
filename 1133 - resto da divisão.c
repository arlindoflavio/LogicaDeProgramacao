#include <stdio.h>

int main() {

  int X, Y, aux = 0, cont = 0;

  scanf("%d %d", &X, &Y);

  if(X > Y){
    aux = X;
    X = Y;
    Y = aux;
  }
  
  for(cont = X + 1; cont < Y; cont++){
    if(cont % 5 == 2 || cont % 5 == 3){
      printf("%d\n", cont);
    }
  }

  return 0;

}