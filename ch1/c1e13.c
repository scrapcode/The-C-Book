/*
@author: cameron cecil

Excercise 1-13: Print a histogram of the lengths of words in it's input.
                A vertical histogram is more challenging.
*/

#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX_LENGTH 15

main()
{
    int c, i, j;
    int wl, state;
    int lengths[MAX_LENGTH+1];

    for (i = 0; i <= MAX_LENGTH; i++)
        lengths[i] = 0;

    state = OUT;
    while ((c = getchar()) != EOF) {
       if (c == ' ' || c == '\t' || c == '\n') {
           if (state == IN) {
               ++lengths[wl];
               state = OUT;
           }
       }
       else
       {
           if (state == OUT) {
               wl = 0;
               state = IN;
           }
           ++wl;
       }
    }

    /* horizontal */

    for (i = MAX_LENGTH; i > 0; --i) {
        printf("%2d: ", i);
        for (j = 1; j <= lengths[i]; ++j)
            if (j <= MAX_LENGTH)
                putchar('=');
        putchar('\n');
    }

    /* vertical */

    for (i = MAX_LENGTH; i > 0; --i) {
        printf(" %2d |", i);
        for (j = 1; j <= MAX_LENGTH; ++j) {
            if (lengths[j] >= i)
                printf(" ##");
            else
                printf("   ");
        }                    
        putchar('\n');
    }
    printf("    |");
    for (i = 1; i <= MAX_LENGTH; ++i)
        printf(" %2d", i);        

    putchar('\n');
}
