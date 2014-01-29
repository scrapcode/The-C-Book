#include <stdio.h>

#define MAXLINE 1000 /* max input line size */

int cgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest line */
main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = cgetline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)    /* there was a line */
        printf("(%d chars long): %s", max, longest);
    return 0;
}

/* getline: read a line into s, return length */
int cgetline(char s[], int lim)
{
    int c, i;

    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
        if (i < lim-2)
            s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' to 'to' */
void copy(char to[], char from[])
{
   int i;
   
   i = 0;
   while ((to[i] = from[i]) != '\0')
       ++i; 
}
