#include <stdio.h>
double ma(double m, double n);
int main(void)
{
	double x, y;

	printf("Enter two double number: ");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("%lf\n", ma(x, y));
		
	}
	return 0;
}

double ma(double m, double n)
{
	return (m - n) / (m * n);
}
