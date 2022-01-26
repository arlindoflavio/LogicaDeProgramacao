#include <stdio.h>

int main(){

  int idade, cont = 0;
  float soma = 0, media = 0;

  while(scanf("%d", &idade) >= 0){
    if(idade < 0)
      break;

    else
      soma = soma + idade;
      cont++;
  }

    media = soma / cont;

    printf("%.2f\n", media);
  
  return 0;
}