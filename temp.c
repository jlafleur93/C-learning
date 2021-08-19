#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = 0; 
  upper = 300; 
  step = 20;

  fahr = lower;
  while(fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
     printf("\n");
     printf("|-----------------------------|\n");
     printf("|");
     printf("%12.0f %15.1f | \n",fahr, celsius);
     printf("|-----------------------------|");
    fahr = fahr + step;
  }
}

/* all vars need to be declared before they are used. Int declares the variable as an Integer, if I used float, the number would have fractions */