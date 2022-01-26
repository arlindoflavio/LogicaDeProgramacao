#include <stdio.h>

int main(){

	int x, y, aux = 0, mult = 0, soma = 0;

  scanf("%d %d", &x, &y);

  if(x > y){
    aux = x;
    x = y;
    y = aux;
  }

  while(x != y + 1){
    mult = x % 13;
    if(mult != 0){
      soma = soma + x;
    }
    if(mult == 0){
      soma = soma;
    }
    x++;
  }

  printf("%d\n", soma);

  return 0;
}