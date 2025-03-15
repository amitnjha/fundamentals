#include <stdio.h>

/*
  Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
*/

void squeeze(char s1[], char s2[]);

int main(){

  char s1[] = "This is first string";
  char s2[] = "string";

  printf("%s\n%s\n",s1,s2);
  squeeze(s1, s2);

  printf("%s\n",s1);
  
}

void squeeze(char s1[], char s2[]){

  int i = 0;
  int j = 0;
  int k = 0;
  int copy = 1;
  for(i = 0; s1[i] != '\0'; i++){
    for(j = 0; s2[j] != '\0'; j++){
	if(s1[i] == s2[j]){
	  //dont copy
	  copy = 0; //false;
	  break;
	}else{
	  copy = 1; //true;
	}
      }
	  if(copy)
	    s1[k++] = s1[i];
	      
  }
    s1[k] = '\0';
}


