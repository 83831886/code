#include <stdio.h>
#include <string.h>
#define LEN1 80
#define LEN2 80
char * string_in(char * str1, char * str2);
int main(void)
{
	char str1[LEN1];
	char str2[LEN2];
	char * p;
	while (1)
	{
	puts("Enter first string:");
	fgets(str1, LEN1, stdin);
	if (*str1 == 'q')
		break;
	puts("Enter second string:");
	fgets(str2, LEN2, stdin);

	p = string_in(str1, str2);
	if (p)
		puts(p);
	else
		puts("no find.");
	}
	return 0;
}

char * string_in(char * str1, char * str2)
{
	char * temp;
	char * temp1 = str2;
	int i = 0;

	if (strlen(str1) < strlen(str2))
		return NULL;
	while (*str2 != '\n' && *str1 != '\n')
	{
		if (*str1 == *str2)
		{
			if (i == 0)
				temp = str1;
			str1++;
			str2++;
			i++;
		}
		else
		{
			str1++;
			str2 = temp1;
			i = 0;
		}
	}
	if (i == 0)
		return NULL;
	else
		return temp;
}
