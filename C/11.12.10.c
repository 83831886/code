#include <stdio.h>
#define LIM 40
int sum(char * st);
int main(void)
{
	char str[LIM];

	puts("Enter a string:");
	fgets(str, LIM, stdin);
	printf("%d\n", sum(str));

	return 0;
}

int sum(char * st)
{
	int count = 0;

	while (*st != '\n')
	{
		st++;
		count++;
	}
	return count;
}
