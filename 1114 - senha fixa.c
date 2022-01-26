#include <stdio.h>
#define SENHA 2002

int main(){

	int tent;

  while(tent != SENHA){
    scanf("%d", &tent);
    if(tent == SENHA){
      printf("Acesso Permitido\n");
      return 0;
    }

    if(tent != SENHA)
      printf("Senha Invalida\n");
  }

    return 0;
}