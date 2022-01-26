#include <stdio.h>

int main() {

  int num, horas;
  double valor, sal;

  scanf("%d %d", &num, &horas);
  scanf("%lf", &valor);

  sal = horas * valor;
  
  printf("NUMBER = %d\n", num);
  printf("SALARY = U$ %.2lf\n", sal);
  
  return 0;
}