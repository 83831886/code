#include <stdio.h>
int main(void)
{
	int times, i;
        double sum;

	printf("输入次数： ");


	while (scanf("%d", &times) == 1 && times > 0)
	{
		sum = .0;
	
		for (i = 0; i < times; i = i + 2.0)
		{
			sum += 1.0 / (i + 1);
		}
		for (i = 1; i < times; i = i + 2.0)
		{
			sum += -1.0 / (i + 1);
		}
		printf("%lf\n", sum);
	}

	return 0;
}	
