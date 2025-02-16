#include <stdio.h>


int main(){

  int lower, upper, step;
  float fahr, cel;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit <--> Celsius\n");
  printf("-----------------------\n");
  
  while(fahr <= upper){

    cel = (5.0/9.0) * (fahr - 32);
    printf("%3.1f <--> %6.1f\n", fahr , cel);
    fahr += step;
    
  }
}
