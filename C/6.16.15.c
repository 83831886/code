#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[255];
	int i = 0, j;

	printf("Enter a sentence: ");

	while (ch[i - 1] != '\n')
	{
		scanf("%c", &ch[i]);
		i++;
	}

	for (j = 0; j <= strlen(ch) + 1; j++)
	{
		printf("%c", ch[strlen(ch) - j + 1]);
	}	
	printf("\n");

	return 0;
}


