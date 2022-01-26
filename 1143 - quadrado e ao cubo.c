#include <stdio.h>

int main() {

  int n, i = 1, a, b;

  scanf("%d", &n);

  while(i <= n){
    a = i * i;
    b = i * i * i;

    printf("%d %d %d\n", i, a, b);

    i++;
  }

  return 0;
}