#include <stdio.h>
#include <string.h>
#define LEN 80
void change(char * st);
int main(void)
{
	char str[LEN];
	while (1)
	{
	puts("Enter a string:");
	fgets(str, LEN, stdin);
	change(str);
	puts(str);
	}
	return 0;
}

void change(char * st)
{
	int i = 0;
	char temp;
	for (i = 0 ;i < (strlen(st) - 1) / 2; i++)
	{
		temp = *(st + i);
		*(st + i) = *(st + strlen(st) - i - 2);
		*(st + strlen(st) - i - 2) = temp;
	}
}
