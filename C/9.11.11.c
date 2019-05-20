#include <stdio.h>
void Fibonacci(int);
int main(void)
{
	int x;

	while (scanf("%d", &x) == 1)
		Fibonacci(x);
	return 0;
}

void Fibonacci(int x)
{
	int i = 1, j = 1;
	int k,temp;

	for (k = 0; k < x; k++)
	{
		if (k == 0 || k == 1)
			printf("1 ");
		else
		{	
			temp = j; 
	       		j = i + j; 
			i = temp;
			printf("%d ", j);
		}
	}
	putchar('\n');

}
