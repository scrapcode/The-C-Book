#include <stdio.h>

/* write a program that prints its input one word per line */
main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t')
      printf("\n");
    else
      putchar(c);
  }
}