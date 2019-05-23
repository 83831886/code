#include <stdio.h>
#define NUMBER 4
void sum(int ar[], int br[], int cr[], int n);
int main(void)
{

	int num1[NUMBER] = { 2, 4, 5, 8 };
	int num2[NUMBER] = { 1, 0, 4, 6 };
	int num3[NUMBER];

	sum(num1, num2, num3, NUMBER);

	int i;

	for (i = 0; i < NUMBER; i++)
		printf("%d ", num3[i]);
	putchar('\n');

	return 0;
}

void sum(int ar[], int br[], int cr[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(cr + i) = *(ar + i) + *(br + i);
}
