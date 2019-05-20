#include <stdio.h>
double ww(double, double);
int main(void)
{
	double x, y;

	scanf("%lf %lf", &x, &y);
	printf("%g\n",ww(x, y));

	return 0;
}

double ww(double x, double y)
{
	return 1 / ((1 / x + 1 / y) / 2);
}
