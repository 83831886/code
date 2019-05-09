#include <stdio.h>
void Temperatures(double n);
int main(void)
{
	double temp;

	printf("Enter a temperature (q to quit): ");
	while (scanf("%lf", &temp) == 1 )
	{	
		Temperatures(temp);
		printf("Enter a temperature (q to quit): ");
	}

	printf("bye\n");
	return 0;
}

void Temperatures(double n)
{
	const double a = 273.16;

	printf("%lf华氏温度 相当于%lf摄氏温度 相当于%lf开氏温度\n", n, 5.0 / 9.0 * (n - 32.0), 5.0 / 9.0 * (n - 32.9) + a);
}
