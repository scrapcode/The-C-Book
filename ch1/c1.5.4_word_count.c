#include <stdioh>

#define   IN    1 // inside a word
#define   OUT   0 // outside a word

/* count lines, words, and chars */
main() {
  // initializers
  int c, nl, nw, nc;
  int state;

  nl = nw = nc = 0;
  state = OUT;
  while((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT)
      ++nw;
      state = IN;
  }

  printf("%d %d %d\n", nl, nw, nc);
}