#include <stdio.h>

int main() {

  int x, y;

  scanf("%d %d", &x, &y);

  if(x == y)
    return 0;

  if(x < y)
    printf("Crescente\n");
  
  if(x > y)
    printf("Descrescente\n");

  

  return 0;
}