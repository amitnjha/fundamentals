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
    } else if(c == ' ' || c == '\t' || 'c' == '\n') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  for (i = 0 ; i < 10; i++){
    printf("%d : %d, ", i, ndigit[i]);
  }
  printf("whitespace: %d, others: %d\n", nwhite, nother);
}
