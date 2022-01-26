#include <stdio.h>
#define MAX 1000

int main() {

  int n, X[MAX], a = 0, i, cont;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &X[i]);
  }

  a = X[0];
  cont = 0;
  
  for(i = 1; i < n; i++){
    if(a > X[i]){
      a = X[i];
      cont = i;
    }
  }
  

  printf("Menor valor: %d\nPosicao: %d\n", a, cont);
    
  return 0;
}