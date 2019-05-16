#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
int main(void)
{
	float num;
	char ch;
	float BASE;

	while (1)
	{
		printf("指定缴纳税金的种类： ");
		scanf("%c", &ch);
		if (ch == 'q')
			break;
		printf("应纳税收入： ");
		scanf("%f", &num);
		
		switch (ch)
		{
			case '1': BASE = 17850.;
				  break;
			case '2': BASE = 23900.;
				  break;
			case '3': BASE = 29750.;
				  break;
			case '4': BASE = 14875.;
				  break;
			default: break;
		}
		if (num <= BASE)
		{
			printf("%f\n", RATE1 * num);
		}
		else
			printf("%f\n", (num - BASE) * RATE2 + (BASE * RATE1));
		while ((ch = getchar()) != '\n')
			;
	}
	return 0;
}





