#include <stdio.h>
int main(void)
{
	int i = 0;
	float money = 1000000.0;

	while (money > 0)
	{
		money = money + 0.08 * money - 100000;
		i++;
	}
	printf("%d\n", i);
	return 0;
}
