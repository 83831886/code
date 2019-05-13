#include <stdio.h>
int main(void)
{
	int i = 0; 
	int count = 5;

	while (count < 150)
	{
		count = 2 * (count - 1);
		printf("第%d周的朋友数量是%d\n", i, count);
		i++;
	}
	return 0;
}
