#include <stdio.h>

#define   PREFIXED     1
#define   NOT_PREFIXED 0

/* copy input to output,
   replace one or more blanks by a single blank */
main()
{
  int c;
  int state;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && state == NOT_PREFIXED) {
      putchar(c);
      state = PREFIXED; //We hit a space
    }
    else if (c != ' ') {
      state = NOT_PREFIXED;
      putchar(c);
    }
  }
}