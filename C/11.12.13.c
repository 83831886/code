#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);
int main(void)
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	int i = 0;

	for (i = 1,  try[0] = toupper(try[0]); i < 5; i++)
			try[i] = tolower(try[i]);
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right!");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else 
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
