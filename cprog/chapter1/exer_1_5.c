#include <stdio.h>

int main(){
  int fahr;
  printf("Fahr\tCelsius\n");
  printf("=====\t====\n");
  // this is my only code that was useful 
  for(fahr =300; fahr >= 0; fahr = fahr - 20){
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

}
