#include <stdio.h>

/*
Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)
*/


int any(char s1[], char s2[]);

int main(int argc, char** argv){

  
  char* s1 = "This is first string";
  char* s2 = "string";

  if(argc == 3){
    s1 = argv[1];
    s2 = argv[2];
  }
  printf("%s\n%s\n",s1,s2);
  

  printf("%d\n",any(s1, s2));
  
}

int any(char s1[], char s2[]){

  int i = 0;
  int j = 0;
  int k = 0;
  int copy = 1;
  for(i = 0; s1[i] != '\0'; i++){
    for(j = 0; s2[j] != '\0'; j++){
	if(s1[i] == s2[j]){
	  //dont copy
	  return i;
      }
  }
  }
  return -1;
}


