#include <stdio.h>
#include <string.h>
#define LEN 40

char * cc(char * st, int n);
int main(void)
{
	char st[LEN];
	puts(cc(st, LEN));
	return 0;
}

char * cc(char * st, int n)
{
	char * ss = st;
	fgets(st, n, stdin);
	while (*st)
	{
		if (*st == '\n' || *st == ' ' || *st == '\t')
			*st = '\0';
		st++;
	}
	return ss;
}
