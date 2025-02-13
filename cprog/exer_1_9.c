#include <stdio.h>


int main(){
  int c;
  int p = -1;
  while((c = getchar()) != EOF){
    if(c != ' '){
      putchar(c);
      p = c;
    }
    else if(c == ' ' && p != ' '){
      putchar(c);
      p = c;
  }
}
}
