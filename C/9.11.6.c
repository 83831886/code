#include <stdio.h>
void change(double *, double *, double *);
int main(void)
{
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("a = %g  b = %g  c = %g\n", a, b, c);
	change(&a, &b, &c);
	printf("a = %g  b = %g  c = %g\n", a, b, c);

	return 0;
}

void change(double * a, double * b, double * c)
{
	double max, min, mid;

	if (*a > *b)
	{
		if (*a > *c)
		{	max = *a;
			if (*b > *c)
			{min = *c;
				mid = *b;
			}
		}
		else 
		{	max = *c;
			min = *b;
			mid = *a;
	}
	}
	else if (*a < *b)
	{
		if (*b > *c)
		{	max = *b;
			if (*a < *c)
			{
				min = *a;
				mid = *c;
			}
		}
		else
		{	max = *c;
			min = *a;
			mid = *b;
		}
	}
	*c = max;
	*b = mid;
	*a = min;
	
}
