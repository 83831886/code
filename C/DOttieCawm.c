#include <stdio.h>
int main(void)
{
	float g, h;
	float tax, rate;

	g = 1e21;
	rate = 0.17;
	tax = rate * g;
	printf("%f \n",tax);

	return 0;
}
