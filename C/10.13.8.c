#include <stdio.h>
#include "hotel.h"
int main(void)
{
	double num[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	double num2[3];
	int i;

	for (i = 0; i < 7; i++)
		printf("%g ", num[i]);
	putchar('\n');
	copy_ptr(num2, num + 2, 3);
	for (i = 0; i < 3; i++)
		printf("%g ", num2[i]);
	putchar('\n');

	return 0;
}
