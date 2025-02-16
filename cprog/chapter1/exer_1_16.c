#include <stdio.h>

#define MAXLINE 1000

int getline_mine(char input[], int limit);

void copy(char to[], char from[]);

int main(){
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while( (len = getline_mine(line, MAXLINE)) > 0){
    printf("%d\n",len);
    if(len > max){
      max = len;
      copy(longest, line);
    }
  }

 
  if (max > 0){
    printf("Longest: %d\n", max);
    printf("%s\n", longest);
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


void copy(char to[], char from[]){

  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
