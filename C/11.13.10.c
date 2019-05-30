#include <stdio.h>
#include <string.h>
#define LEN 80
void noblank(char * st);
int main(void)
{
	char str[LEN];
	puts("Enter a string with blank:");
	while (*fgets(str, LEN, stdin) != '\n')
	{
	noblank(str);
	puts(str);
	puts("Enter a string with blank:");
	}
	return 0;
}

void noblank(char * st)
{
	char * temp;
	while (*st)
	{
		if (*st == ' ')
		{
			temp = st;
			while (*st)
			{
				*st = *(st + 1);
				st++;
			}
			st = temp;
			st++;
		}
		else
		st++;
	}
}
