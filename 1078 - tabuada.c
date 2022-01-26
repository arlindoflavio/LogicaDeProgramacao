#include <stdio.h>

int main() {

  int n, i, result;

  scanf("%d", &n);

  if(n > 2 && n < 1000){
    for(i = 1; i <= 10; i++){
      result = n * i;
      printf("%d x %d = %d\n", i, n, result);
    }
  }

  return 0;
}