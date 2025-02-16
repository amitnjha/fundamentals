#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 50
int getline_mine(char input[], int limit);

void copy(char to[], char from[]);

int main(){
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while( (len = getline_mine(line, MAXLINE)) > 0){

    if(len > THRESHOLD){
      printf("%s\n", line);
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


