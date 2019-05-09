#include <stdio.h>
#define I_PER_C 0.3937
int main(void)
{
	float height;

	printf("Enter a height in centimeters: ");
	scanf("%f", &height);
	while (height > 0)
	{

		printf("%.1f cm = %d feet, %.1f inches\n", height,  (int) (height * I_PER_C) / 12, (height * I_PER_C) - (12 * ((int) (height * I_PER_C) / 12) ));
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &height);
	}

	printf("bye\n");

	return 0;
}
		

