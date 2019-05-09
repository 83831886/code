#include <stdio.h>
int main(void)
{
	int count, sum, i;
	i = 0;
	int days = 0;

	
	count = 0;
	sum = 0;
	printf("Enter days: ");
	scanf("%d", &days);
	while (count++ < days)
	{
		printf("Enter earn day %d: ", count);
		scanf("%d", &sum);
		i = sum + i;
	}
	printf("$%d\n", i);

	return 0;
}
