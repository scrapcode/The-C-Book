#include <stdio.h>

/* count blanks, tabs, and newlines */
main()
{
  int c, nb, nt, nl;

  nb = nt = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  }

  // Output
  printf("%10s: %4d\n", "Blanks", nb);
  printf("%10s: %4d\n", "Tabs", nt);
  printf("%10s: %4d\n", "New Lines:", nl);
}