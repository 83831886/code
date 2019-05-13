#include <stdio.h>
int main(void)
{
	double a[8], b[8], sum;
	int i, j;

	for (i = 0; i < 8; i++)
	{
		printf("输入第%d个数：", i + 1);
		scanf("%lf", &a[i]);
	}

	for (j = 0; j < 8; j++)
	{
		sum += a[j];
		b[j] = sum;
	}

	for (i = 0; i < 8; i++)
	{
		printf("%lf	", a[i]);
	}
	printf("\n");

	for (j = 0; j < 8; j++)
	{
		printf("%lf	", b[j]);
	}
	printf("\n");

	return 0;
}
