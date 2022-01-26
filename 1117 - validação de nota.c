#include <stdio.h>

int main(){

  int n = 2;
  double nota, media = 0, soma = 0;

  while(n > 0){
    scanf("%lf", &nota);
    
    if(nota >= 0 && nota <= 10){
      soma += nota;
      n--;
    }

    else
      printf("nota invalida\n");
    
  }    

  media = soma / 2;

  printf("media = %.2lf\n", media);
  
  return 0;
}