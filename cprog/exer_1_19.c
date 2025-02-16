#include <stdio.h>
#define MAXLINE 1000
#define THRESHOLD 50
int getline_mine(char input[], int limit);

void copy_reverse(char to[], char from[], int limit);
void clear_array(char line[]);
int main(){
  int len;
  int max;
  char line[MAXLINE];
  

  max = 0;
  while( (len = getline_mine(line, MAXLINE)) > 0){
    char target[MAXLINE];
    //trim and print
    //printf("%s", line);
    copy_reverse(target, line, len);
    printf("%s\n", target);
    clear_array(target);
    //clear_array(line);
  }

  return 0;
  
}

void clear_array(char line[]){
  //for(int i = 0 ; i < MAXLINE; i++){
    line[0] = '\0';
    //}
}

int getline_mine(char to[], int limit){
  int c, i;
  for ( i = 0 ; i < limit -1 &&  ((c = getchar()) != EOF) && c != '\n'; i++)
    to[i] = c;
  //to[i] = '\n';
  if(c == '\n')
    to[++i] = '\n';
  return i;
}

void copy_reverse(char to[], char from[], int copylen){

  //printf("reversing , %s\n", from);
  //printf("Copy len %d\n", copylen);
  int i;
  i = 0;
  while(i < copylen)
  {
      to[copylen-1-i] = from[i]; //) != '\0';
      ++i;
  }
  
  to[i] = '\0';
  //printf("result %s", to);
}



