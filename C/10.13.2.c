#include <stdio.h>
void copy_arr(double ar[],const  double br[], int);
void copy_ptr(double ar[],const double br[], int);
void copy_ptrs(double ar[],const double br[], double cr[]);
int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	int i;

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

	for ( i = 0; i < 5; i++)
		printf("%g ", target1[i]);
	putchar('\n');

	for ( i = 0; i < 5; i++)
		printf("%g ", target2[i]);
	putchar('\n');

	for ( i = 0; i < 5; i++)
		printf("%g ", target3[i]);
	putchar('\n');

	return 0;
}

void copy_arr(double ar[], const double br[], int n)
{
	int i;

	for ( i = 0; i < n; i++)
		ar[i] = br[i];
}

void copy_ptr(double ar[], const double br[], int n)
{
	int i;

	for ( i = 0; i < n; i++)
		*(ar + i) = *(br + i);
}

void copy_ptrs(double ar[], const double br[], double cr[])
{

	while (br < cr)
	{
		*ar = *br;
		ar++;
		br++;
	}
}
	
