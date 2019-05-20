#include <stdio.h>
double power(double, int);
int main(void)
{
	double x;
	int y;

	scanf("%lf %d", &x, &y);
	printf("%g\n",power(x, y));

	return 0;
}

double power(double x, int y)
{

	double i;

	if (y > 1)
		i = x * power(x, y - 1);
	else
		i = x;
	return i;

}
	
