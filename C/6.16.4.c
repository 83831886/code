#include <stdio.h>
int main(void)
{
	int i, j, sum = 0;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			
			printf("%c", 'A' + sum);
			sum++;
		}
		printf("\n");
	}

	return 0;
}
