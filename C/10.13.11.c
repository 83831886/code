#include <stdio.h>
#define ROWS 3
#define COLS 5
void change(int rows, int cols, int ar[][cols]);
void show(int rows, int cols, int ar[][cols]);
int main(void)
{
	int num[ROWS][COLS] = {
		{ 2, 4, 6, 8, 10 },
		{ 1, 3, 5, 7, 9 },
		{ 1, 2, 3, 4, 5 }
	};

	show(ROWS, COLS, num);
	change(ROWS, COLS, num);
	show(ROWS, COLS, num);

	return 0;
}

void change(int rows, int cols, int ar[][cols])
{
	int i, j;

	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			*(*(ar + i) + j) *= 2;
}
void show(int rows, int cols, int ar[][cols])
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%d ", *(*(ar + i) + j));
		putchar('\n');
	}
	putchar('\n');
}
