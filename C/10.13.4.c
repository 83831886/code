#include <stdio.h>
int max(double ar[], int n);
int main(void)
{
	double num[] = { 1.2, 3.4, 5.6, 3.5, 9.9 };

	printf("数组中最大值的下标是%d\n", max(num, sizeof num / sizeof num[0]));

	return 0;
}

int max(double ar[], int n)
{
	int i;
        double	max = 0;
        int index_max = 0;

	for (i = 0; i < n; i++)
	{
		if (*(ar + i) > max)
		{	max = *(ar + i);
			index_max = i;
		}
			
	}
	return index_max;
}

