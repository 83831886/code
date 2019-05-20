#include <stdio.h>
void larger_of(double * x, double * y);
int main(void)
{
	double x, y;

	scanf("%lf %lf", &x, &y);
	printf("x = %g y = %g\n", x, y);
	larger_of(&x, &y);
	printf("x = %g y = %g\n", x, y);

	return 0;
}

void larger_of(double * x, double * y)
{
	(*x > *y) ? *y = *x : (*x = *y);
}	

