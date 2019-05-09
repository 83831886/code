#include <stdio.h>
void cube(double n);

int main(void)
{
	double num;

	printf("Enter a num of double: ");
	scanf("%lf", &num);
	cube(num);

	return 0;
}

void cube(double n)
{
	printf("%f\n", n * n * n);

}
