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

int get_line(char line[], int limit);

main()
{
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		printf("%s", line);
	}
}

/* get_line (tabs to spaces) */
int get_line(char s[], int lim)
{
	int i, j, c;
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		if (c == '\t') {
			for (j=0; j<TABSPACES; ++j) {
				s[i+j] = ' ';
			}
			i += TABSPACES-1;
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