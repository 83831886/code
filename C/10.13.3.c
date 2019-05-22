#include <stdio.h>
int max(int ar[], int n);
int main(void)
{
	int num[] = { 1, 3, 5, 23, 1, 22, 33,345 ,343434,34 };
	printf("数组中的最大值是%d\n", max(num, sizeof num / sizeof num[0]));

	return 0;
}

int max(int ar[], int n)
{
	int i, max = 0;

	for (i = 0; i < n; i++)
	{	
		if (*(ar + i) > max)
			max = *(ar + i);
	}

	return max;
}	
