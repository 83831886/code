#include <stdio.h>
#include <string.h>
#define LIM 40
char * blank(char * st);
int main(void)
{
	char str[LIM];
	puts("Enter a string:");
	fgets(str, LIM, stdin);
	if (blank(str))
		puts(blank(str));
	else
		printf("No blank.\n");
	return 0;
}

char * blank(char * st)
{
	while (*st)
	{
		if (*st == ' ')
			return st;
		st++;
	}

	return NULL;

}

