#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char ch[40];

	printf("Please enter a word: ");
	scanf("%s", ch);

	for (i = 0; i < strlen(ch); i++)
	{
		printf("%c", ch[strlen(ch) - i - 1]);
	}
	printf("\n");

	return 0;
}
