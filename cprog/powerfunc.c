#include <stdio.h>

int power(int base, int e);


int main(){
  printf("power of %d times %d is - %d\n", 2, 5, power(2,5));

  printf("power of %d times %d is - %d\n", 2, 10, power(2,10));
}

int power(int base , int e){
  int result = 1;
  for (; e > 0; e--){
    result *= base;
  }
  return result;
}
