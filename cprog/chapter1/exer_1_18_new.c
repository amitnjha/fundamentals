#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 50
int getline_mine(char input[], int limit);

void copy(char to[], char from[], int limit);

int main(){
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while( (len = getline_mine(line, MAXLINE)) > 0){
    //trim and print
    int j = 0;
    //printf("%d\n",len);
    for(j = len-1; j > 0; j--){
      //printf("%c\n",line[j]);
      if(line[j] != '\t' && line[j] != ' ')
	break;
    }
    //printf("%d\n",j);
    if( j > 0){
      for(int i1 = 0 ; i1 < j; i1++){
      printf("%c", line[i1]);
      }
      printf("\n");
    }
    
  }

  return 0;
  
}

int getline_mine(char to[], int limit){
  int c, i;
  for ( i = 0 ; i < limit -1 &&  ((c = getchar()) != EOF) && c != '\n'; i++)
    to[i] = c;
  
  if(c == '\n'){
    to[++i] = '\n';
    to[i] = '\0';
    return i;
  }else {
    while((c = getchar()) != EOF)
      i++;
    to[i] = '\0';
  }
  
  return i;  
}

void copy(char to[], char from[], int copylen){

  int i;
  i = 0;
  while((to[i] = from[i]) != '\0' && i < copylen)
    ++i;
}



