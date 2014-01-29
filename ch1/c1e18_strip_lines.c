/*
 * @author: cameron cecil
 *
 * KnR C Book Problems
 * Exercise 1-18:
 * Write a program to remove trailing blanks and tabs from
 * each line of input, and to delete entireley blank lines.
 *
 */

#include <stdio.h>

#define MAXLINE       1000 /* max char length of line */

int cgetline(char line[], int maxlen);
int stripline(char  line[]);

main()
{
	int len, newlen;
	char line[MAXLINE];
	char clean_line[MAXLINE];

	while ((len = cgetline(line, MAXLINE)) > 0) {
		if((newlen = stripline(line)) != 0)
			printf("%3d: %s\n", newlen, line);
	}
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

int stripline(char line[])
{
	int len;
	for (len = 0; line[len] != 0; ++len)
		;

	while (len > 0 && line[len-1] <= ' ')
		line[--len] = 0;

	return len;
}