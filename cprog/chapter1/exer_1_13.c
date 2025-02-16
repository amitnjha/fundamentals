#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

  int c, nl, nw, nc, state, i, currword = 0;

  int wordlengths[21];
  for (int i = 0 ; i < 21; i++)
    wordlengths[i] = 0;
  
  state = OUT;

  nl = nw = nc = 0;

  while ((c = getchar()) != EOF){

    ++nc;
    if( c == '\n')
      ++nl;
    if( c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      if(currword > 20){
	wordlengths[20]++;
      }else{
	wordlengths[currword]++;
      }
      currword = 0 ;
    }else if (state == OUT) {
      state = IN;
      ++nw;
    } else {
      currword++;
    }
    
  }
  printf("%d %d %d\n", nl, nw, nc);
  printf("Histogrm\n");

  for (int i = 0 ; i < 21; i++){
    printf("%2d :", i+1);
    for(int j = 0 ; j < wordlengths[i]; j++)
      printf("*");
    printf("\n");
  }
  
}
