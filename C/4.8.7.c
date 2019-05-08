#include <stdio.h>
#include <float.h>
int main(void)
{
	double d = 1.0/3.0;
	float  e = 1.0/3.0;

	printf("%.6f %.6f\n", d, e);
	printf("%.12f %.12f\n", d, e);
	printf("%.16f %.16f\n", d, e);
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	
	return 0;
}

