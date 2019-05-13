#include <stdio.h>
int main(void)
{
	int i, j, k, m, n;
	char ch;

	printf("Enter a word: ");
	scanf("%c", &ch);
	m = (int)(ch - 'A');

	for (i = 0; i < m + 1; i++)
	{
		for (j = 0; j <= m - i; j++)
		{
			printf("%c", 32);
		}

		for (k = 0; k <= i; k++)
		{
			printf("%c", 'A' + k);
		}

		for (n = 0; n < i; n++)
		{
			printf("%c", 'A' + k - n - 2);
		}

		printf("\n");

	}

	return 0;
}


			
