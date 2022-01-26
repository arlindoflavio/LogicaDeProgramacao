#include <stdio.h>

int main(){

  int x;
  double y, consumo = 0;

  scanf("%d %lf", &x, &y);

  consumo = x / y;

  printf("%.3lf km/l\n", consumo);

  return 0;
}