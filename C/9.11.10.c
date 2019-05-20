#include <stdio.h>
void to_binary(unsigned long n);
void to_base_n(unsigned long, int);
int main(void)
{
	unsigned long number;
	int x;
	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu %d", &number, &x) == 2)
	{
		printf("Binary equivalent: ");
		to_base_n(number, x);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");

	return 0;
}

void to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');

	return;
}

void to_base_n(unsigned long n, int m)
{
	int r;

	r = n % m;
	if (n >= m)
		to_base_n(n / m, m);
	printf("%d", r);

}
