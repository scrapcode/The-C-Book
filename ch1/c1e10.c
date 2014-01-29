#include <stdio.h>

/* copy input to output,
   replace tabs, backspace, and blackslash with escape chars. */
main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}