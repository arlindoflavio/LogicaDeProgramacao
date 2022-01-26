int main(){

	int n, x, contin = 0, contout = 0;
	
  scanf("%d", &n);


  while(n > 0){
    scanf("%d", &x);
    
    if(x >= 10 && x <= 20)
      contin++;
    
    else
      if(x < 10 || x > 20)
        contout++;

    n--;
  }

  printf("%d in\n%d out\n", contin, contout);

  return 0;
}