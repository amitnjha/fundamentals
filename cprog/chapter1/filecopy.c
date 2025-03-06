#include <stdio.h>

int main()

{
  int c;
  printf("%d is EOF\n", EOF);
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
