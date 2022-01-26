#include <stdio.h>

int main() {

  int n, x = 1, result;

  scanf("%d", &n);

  while(x < 10000){
    result = x % n;
    if(result == 2){
      printf("%d\n", x);
    }
    x++;
  }

  return 0;
}