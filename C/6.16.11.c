#include <stdio.h>
int main(void)
{
	int a[7];
	int i, j;

	printf("Enter 8 numbers: ");
	for (j = 0; j < 8; j++)
	{
		scanf("%d", &a[j]);

	}


	for (i = 0; i < 8; i++)
	{
		printf("%d ", a[7-i]);
	}
	printf("\n");

	return 0;
}

