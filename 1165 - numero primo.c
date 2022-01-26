#include <stdio.h>
 
int nprimo(int n, int cont){
 
    int divisor;
    int aux;
 
    cont = 0;
 
    for (divisor = 1; divisor <= n; divisor++){
        if (n % divisor == 0) {
        cont++;
        }
    }
 
    if (cont == 2)
        aux = 1;
    else
        aux = 0;
 
    return aux;
}
 
int main() {

  int n, x;
  int cont;
 
  scanf("%d", &x);
  
  while(x > 0){
  scanf("%d", &n);
 
    if (nprimo(n, cont) == 1)
        printf("%d eh primo\n", n);
    else
        printf("%d nao eh primo\n", n);
    
    x--;
  } 

  return 0;

}