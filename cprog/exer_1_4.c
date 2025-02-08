#include <stdio.h>


int main(){

  int lower, upper, step;
  float fahr, cel;

  lower = 0;
  upper = 300;
  step = 20;

  cel = lower;

  printf("Celsius <--> Fahrenheit\n");
  printf("-----------------------\n");
  
  while(cel <= upper){

    fahr = (9.0/5.0) * cel + 32;
    printf("%3.1f <--> %6.1f\n", cel, fahr);
    cel += step;
    
  }
}
