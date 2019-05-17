#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);
float digit(void);
int main(void)
{
	float x, y;
	char opera;
	bool isdigitx = true;
	bool isdigity = true;

	while (1)
	{
		printf("Enter the operation of your choice:\n");
		printf("a. add		 s. subtract\n");
		printf("m. multiply	 d. divide\n");
		printf("q. quit\n");
		opera = getchar();
		if (opera == 'q')
			break;
		if (opera == 'a' || opera == 's' || opera == 'm' || opera == 'd')
		{
			printf("Enter first number: ");
			x = digit();
			printf("Enter second number: ");
			y = digit();
		}
				
		while (opera == 'd' && y == 0)
		{
			printf("Enter a number other than 0: ");
			y = digit();
		}
		switch (opera)
		{
			case 'a': add(x, y);
				  break;
			case 's': sub(x, y);
				  break;
			case 'm': mul(x, y);
				  break;
			case 'd': div(x, y);
				  break;
			default:  printf("Enter error.\n");
		}
		while (getchar() != '\n')
			continue;
	}
	printf("Bye.\n");
	return 0;
}
void add(float a, float b)
{
	printf("%g + %g = %g\n", a, b, a + b);
}
void sub(float a, float b)
{
	printf("%g - %g = %g\n", a, b, a - b);
}
void mul(float a, float b)
{
	printf("%g * %g = %g\n", a, b, a * b);
}
void div(float a, float b)
{
	printf("%g / %g = %g\n", a, b, a / b);
}
float digit(void)
{
	float a;
	
	while (scanf("%f", &a) != 1)
	{
		printf("one is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
		while (getchar() != '\n')
			continue;
	}
	
	return a;
}
