/*
* @author: cameron cecil
*
* KnR C Book Problems
* Exercise 1-20:
* Write a program that replaces tabs in the input
* with a number or blanks.
*
*/

#include <stdio.h>

#define MAXLINE    1000    /* max input size */
#define TABSPACES  4       /* how many spaces to transform tabs into */

#define TRUE       1
#define FALSE      0

int get_line(char line[], int limit);

main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        printf("%s", line);
    }
}

/* get_line (spaces to tabs) */
int get_line(char s[], int lim)
{
    int i, j, c;
    int tab_detect;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        if (c == ' ') {
            tab_detect = TRUE;
            for (j = i-1; j >= i-(TABSPACES-1); --j) {
                if (s[j] != ' ')
                    tab_detect = FALSE;
            }

            if (tab_detect == TRUE) {
                s[i-(TABSPACES-1)] = '\t';
                i -= (TABSPACES-1);
            }
            else
            {
                s[i] = c;
            }
        } else {
            s[i] = c;
        }
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}