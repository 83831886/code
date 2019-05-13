#include <stdio.h>
#include <math.h>
int main(void)
{
	int num[8];
	int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		num[i] = pow(2.0, (double)(i + 1));
	}

	do

	{
		printf("%d ", num[j]);
		j++;
	} while (j < 8);

	printf("\n");

	return 0;
}

