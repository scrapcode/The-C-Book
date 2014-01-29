#include <stdio.h>

#define MAXLINE        1000 /* maximum size of a line */
#define THRES_TO_PRINT 80   /* print lines over this char count */

int cgetline(char line[], int maxsize);

main()
{
    int len;
    int lines_printed;
    char line[MAXLINE];

    lines_printed = 0;
    while ((len = cgetline(line, MAXLINE)) > THRES_TO_PRINT) {
        printf("%3d: %s", len, line); 
        ++lines_printed;
    }

    printf("Lines over %d chars: %d\n", THRES_TO_PRINT, lines_printed);
}

int cgetline(char s[], int limit)
{
    int c, i;

    for (i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
