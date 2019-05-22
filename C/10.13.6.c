#include <stdio.h>
void back(double ar[], int n);
int main(void)
{
	int i;
	double num[] = { 2.3, 1.1, 3.4, 2.5, 5.6, 9.8, 7.7 };

	for (i = 0; i < sizeof num / sizeof num[0]; i++)
		printf("%g ", *(num + i));
	putchar('\n');
	back(num, sizeof num / sizeof num[0]);
	for (i = 0; i < sizeof num / sizeof num[0]; i++)
		printf("%g ", *(num + i));
	putchar('\n');

	return 0;
}

void back(double ar[], int n)
{
	double temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(ar + i);
		*(ar + i) = *(ar + n - 1 - i);
		*(ar + n - 1 - i) = temp;
	}
}



	
