#include <stdio.h>
#define MSG "my name is wangwei"
char * findc(char * str, char n);
int main(void)
{
	char * st = MSG;
	char n;

	puts("Enter a character:");
	n = getchar();
	while (n && n != '\n' )
	{
	if (findc(st, n))
       		puts(findc(st, n));
	else
		puts("no find");
	while (getchar() != '\n')
		continue;
	n = getchar();
	}
	return 0;
}

char * findc(char * str, char n)
{

	while (*str != n && *str != '\0')
	{
		str++;
		if (*str == '\0')
			return NULL;
	}
	return str++;
}

