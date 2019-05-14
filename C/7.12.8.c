#include <stdio.h>
#include <ctype.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BASE1 300.0 * RATE1
#define BASE2 300.0 * RATE1 + 150.0 * RATE2
#define JB 40
#define TIME 1.5
int main(void)
{
	int hours = 0;
	char se;
	float BASE = 0.0;
	while (se != '5')
	{
		printf("***************************************************************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr				2) $9.33/hr\n");
		printf("3) $10.00/hr				4) $11.20/hr\n");
		printf("5) quit\n");
		printf("***************************************************************************************************************\n");

		if (! isdigit(se = getchar()))
		{	while (getchar() != '\n')

			 	continue;
		}
		
			
		
		switch (se)
		{
			case '1': BASE = 8.75;
				  break;
			case '2': BASE = 9.33;
			  	break;
			case '3': BASE = 10.00;
			  	break;
			case '4': BASE = 11.20;
			  	break;
			case '5': break;
			default: printf("请输入正确的选项!!\n");
		}


		if (se == '1' || se == '2' || se == '3'|| se == '4')
		{	printf("请输入一周工作的小时数： ");
			scanf("%d", &hours);
			if (hours > 40)
				hours = (hours - 40) * TIME + 40.0;
			if (hours * BASE <= 300)
				printf("工资总额：%f, 税金：%f, 净收入： %f\n", hours * BASE, hours * BASE * RATE1, (hours * BASE) - (hours * BASE * RATE1));
			else if (hours * BASE > 300 && hours * BASE <= 450)
				printf("工资总额：%f, 税金：%f, 净收入： %f\n", hours * BASE, BASE1 + (hours * BASE - 300) * RATE2, (hours * BASE) - (BASE1 + (hours * BASE - 300) * RATE2));
			else
				printf("工资总额：%f, 税金：%f, 净收入： %f\n", hours * BASE, BASE1 + BASE2 + (hours * BASE - 450.0) * RATE3, (hours * BASE) - (BASE1 + BASE2+ (hours * BASE - 450.0) * RATE3));
		}
	}
	printf("Bye\n");

	return 0;
}


			
