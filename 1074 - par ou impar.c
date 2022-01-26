#include <stdio.h>

int main() {

  int n, x;

  scanf("%d", &n);

  while(n > 0){
    scanf("%d", &x);

    if(x == 0)
      printf("NULL\n");
    
    else
      if((x % 2) == 0 && (x > 0))
        printf("EVEN POSITIVE\n");
    
    else
      if((x % 2) == 0 && (x < 0))
        printf("EVEN NEGATIVE\n");

    else
      if((x % 2) != 0 && (x > 0))
        printf("ODD POSITIVE\n");
    
    else 
      if((x % 2) != 0 && (x < 0))
        printf("ODD NEGATIVE\n");
        
    n--;
  }

  return 0;
}