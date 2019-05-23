#include <stdio.h>
#define ROWS 3
#define COLS 5
void cunchu(int rows, int cols, double ar[][cols]);
double average(double ar[], int n);
double average_all(int rows, int cols, double ar[][cols]);
double maxx(int rows, int cols, double ar[][cols]);
void pri(int rows, int cols, double ar[][cols],double average1, double average2, double average3, double average_a, double max);
int main(void)
{
	double num[ROWS][COLS];
	double max, average1, average2, average3, average_a;	
	int i;
	cunchu(ROWS, COLS, num);
	for (i = 0; i < ROWS; i++)
		switch (i)
		{
			case 0: average1 = average(num[i], COLS);
				  break;
			case 1: average2 = average(num[i], COLS);
				  break;
			case 2: average3 = average(num[i], COLS);
				  break;
			default: break;
		}
	average_a = average_all(ROWS, COLS, num);
	max = maxx(ROWS, COLS, num);
	pri(ROWS, COLS, num, average1, average2, average3, average_a, max);
	return 0;
}
void cunchu(int rows, int cols, double ar[][cols])
{
	int i;
	for (i = 0; i < rows; i++)
	{
		printf("请输入第%d组5个double类型的数：", i + 1);
		scanf("%lf %lf %lf %lf %lf", &ar[i][0], &ar[i][1], &ar[i][2], &ar[i][3], &ar[i][4]);
	}
}
double average(double ar[], int n)
{
	int i;
	double total;
	for (i = 0, total = 0.0; i < n; i++)
		total += ar[i];
	return total / n;
}
double average_all(int rows, int cols, double ar[][cols])
{
	int i, j;
	double total = 0.0;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			total += ar[i][j];
	return total / (i * j);
}
double maxx(int rows, int cols, double ar[][cols])
{
	int i, j;
	double max = 0.0;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			if (ar[i][j] > max)
				max = ar[i][j];
	return max;
}
void pri(int rows, int cols, double ar[][cols], double average1, double average2, double average3, double average_a, double max)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%g ", *(*(ar + i) + j));
		putchar('\n');
	}
	printf("3个组的平均值分别是：%g	 %g  %g\n", average1, average2, average3);
	printf("所有数据的平均值是：%g\n", average_a);
	printf("所有数据中的最大值是：%g\n", max);
}
			
