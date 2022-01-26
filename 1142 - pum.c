#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, cont = 1, mult = 0;
	
    scanf("%d", &n);

    n = n * 4;

    while(n > 0){
  
      mult = cont % 4;

      if(mult != 0){
        printf("%d ", cont);
      }
      else{
        printf("PUM\n");
      }
        
      cont++;

      n--;
    }

    return 0;
}