#include <stdio.h>
int main(void)
{
	int weight, height;

	scanf("%d %d", &weight, &height);
	if (weight < 100 && height > 64)
	{
		if (height >= 72)
			printf("You are very tall for your weight.\n");
		else if (height < 72 && height > 64)
			printf("You are tall for your weight.\n");
	}
	else
		if (weight > 3000 && height < 48)


