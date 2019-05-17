#include <stdio.h>
void alter(int *, int *);
int main(void)
{
	int x = 2, y = 2;

	alter(&x, &y);
	printf("%d %d\n", x, y);

	return 0;
}

void alter(int * x, int * y)
{
	int add, sub;

	add = *x + *y;
	sub = *x - *y;

	*x = add;
	*y = sub;

}
