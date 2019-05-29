#include <stdio.h>
int is_within(char n, char * st);
int main(void)
{
	char * str = "what is your name";
	char ss;

	puts(str);
	ss = getchar();
	if (is_within(ss, str))
		puts("TRUE.");
	else
		puts("False.");

	return 0;
}

int is_within(char n, char * st)
{
	while (*st)
	{
		if (*st == n)
			return 1;
		st++;
	}
	return 0;
}

