/*
 * @author: cameron cecil
 *
 * KnR C Book Problems
 * Exercise 1-19:
 * Write a function reverse(s) that reverses the character
 * string s. Use it to write a program that reverses it's input
 * a line at a time.
 *
 */

#include <stdio.h>

#define MAXLINE         1000

int get_line(char line[], int limit);
void reverse(char string[]);

main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s\n", line);
    }
}

/* get_line: get input and return length */
int get_line(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* reverse: reverse input string */
void reverse(char s[])
{
    int len, i;
    char tmp; /* temporary swap placeholder */

    /* get string length minus the nl char */
    for (len = 0; s[len] != '\n'; ++len)
        ;

    for (i = 0; i < len; ++i) {
        tmp = s[i];
        s[i] = s[len-1];
        s[len-1] = tmp;
        --len;
    }
}