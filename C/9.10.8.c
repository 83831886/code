#include <stdio.h>
#include <ctype.h>
int tt(int, int, int);
int main(void)
{

	int a, b, c;
	printf("Enter 3 integers: ");
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		printf("最大值是%d\n", tt(a, b, c));
	printf("Enter 3 integers: ");
	}
	 return 0;
}

int tt(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{	if (b > c)
			return b;
		else
			return c;
	}
}
