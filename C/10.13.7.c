#include <stdio.h>
#define COLS 3
#define ROWS 2
#include "hotel.h"
int main(void)
{
	int i, j;
	double num[ROWS][COLS] = {
		{ 2.3, 4.5, 5.6 },
		{ 1.1, 2.4, 3.9 }
	};
	double num2[2][3];

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%g ", *(*(num + i) + j));
		putchar('\n');
	}
	putchar('\n');
	

	for (i = 0; i < ROWS; i++)
		copy_ptr(num2[i], num[i], COLS);
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%g ", *(*(num2 + i) + j));
		putchar('\n');
	}
	return 0;
}

