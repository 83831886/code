#include <stdio.h>
int main(void)
{
	int lower, upper, i, sum, j;

	printf("Enter lower and upper integer limits: ");
	while (scanf("%d %d", &lower, &upper) == 2 && lower < upper)
	{
		sum = 0;
		j = lower;
		for (i = 0; i <= upper - lower; i++)
		{
			sum = sum + j * j;
			j++;
		}
		printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
		printf("Enter next set of limits: ");
	}
	printf("Done\n");
	return 0;
}
