#include <stdio.h>
double sub(double ar[], int n);
int main(void)
{
	double num[] = { 1.2, 3.4, 5.6, 3.2, 9.8 };

	printf("数组中最大值和最小值的差值为%g\n", sub(num, sizeof num / sizeof num[0]));

	return 0;
}

double sub(double ar[], int n)
{
	int i;
        double	max, min = ar[0];

	for (i = 0; i < n; i++)
	{
		if (*(ar + i) > max)
			max = *(ar + i);
		if (*(ar + i) < min)
			min = *(ar + i);
	}
	return (max - min);
}

