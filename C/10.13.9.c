#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy(int rows, int cols, double ar[rows][cols], double br[rows][cols]);
void show(int rows, int cols, double ar[rows][cols]);
int main(void)
{
	int i, j;
	double num[ROWS][COLS] = {
		{ 1.1, 2.2, 3.3, 4.4, 5.5 },
		{ 1.2, 1.3, 1.4, 1.5, 1.6 },
		{ 2.3, 4.3, 2.5, 4.6, 9.4 }
	};
	double num2[ROWS][COLS];
	copy(ROWS, COLS, num, num2);
	show(ROWS, COLS, num);
	show(ROWS, COLS, num2);
	return 0;
}

void copy(int rows, int cols, double ar[rows][cols], double br[rows][cols])
{
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			*(*(br + i) + j) = *(*(ar + i) + j);
}

void show(int rows, int cols, double ar[rows][cols])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%g ", *(*(ar + i) + j));
		putchar('\n');
	}
	putchar('\n');
}




