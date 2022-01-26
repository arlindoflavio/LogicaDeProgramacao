#include <stdio.h>

int main(){

	int n;
    double x, y, z, media = 0;
	
    scanf("%d", &n);

    while(n > 0){
      scanf("%lf %lf %lf", &x, &y, &z);

      x = x * 2;
      y = y * 3;
      z = z * 5;

      media = (x + y + z) / 10;     

      printf("%.1lf\n", media); 

      n--;
    }

    return 0;
}