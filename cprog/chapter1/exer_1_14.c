#include <stdio.h>

int main(){

  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;

  for( i = 0 ; i < 10 ; i++)
    ndigit[i] = 0;

  while((c = getchar()) != EOF){

    if( c >= '0' && c <= '9'){
      ++ndigit[c-'0'];
    } else if(c == ' ' || c == '\t' || c == '\n') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  for (i = 0 ; i < 10; i++){
    printf("%2d :", i);
    //printf("%2d :", i+1);
    for(int j = 0 ; j < ndigit[i]; j++)
      printf("*");
    printf("\n");
  }
  printf(" w :");
  for(int j = 0 ; j < nwhite; j++)
      printf("*");
  printf("\n");
  printf(" o :");
  for(int j = 0 ; j < nother; j++)
      printf("*");
  printf("\n");
}
