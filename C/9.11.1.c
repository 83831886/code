#include <stdio.h>
double min(double, double);
int main(void)
{
	double x, y;

	printf("输入两个数: ");
	if (scanf("%lf %lf", &x, &y) != 2)
		printf("输入错误\n");
	else
	printf("最小值是%g\n", min(x, y));

	return 0;
}

double min(double x, double y)
{
	return (x < y) ? x : y;
}
