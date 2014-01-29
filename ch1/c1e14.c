#include <stdio.h>

#define NUM_CHARS   128     //ASCII Characters

main()
{
    int c, i;
    int char_freq[NUM_CHARS+1];

    while ((c = getchar()) != EOF)
        ++char_freq[c];

    for (i = 1; i <= NUM_CHARS; ++i) {
        if (char_freq[i] > 0)
            printf(" (%3d): %4d\n", i, char_freq[i]);
    }
}
