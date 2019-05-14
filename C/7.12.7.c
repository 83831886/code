#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BASE 10.0
#define BASE1 300.0 * RATE1
#define BASE2 300.0 * RATE1 + 150.0 * RATE2
#define JB 40
#define TIME 1.5
int main(void)
{
	int hours = 0;

	printf("请输入一周工作的小时数： ");
	scanf("%d", &hours);
	if (hours > 40)
		hours = (hours - 40) * TIME + 40.0;
	if (hours * BASE <= 300)
		printf("工资总额：%f, 税金：%f, 净收入： %f\n", hours * BASE, hours * BASE * RATE1, (hours * BASE) - (hours * BASE * RATE1));
	else if (hours * BASE > 300 && hours * BASE <= 450)
		printf("工资总额：%f, 税金：%f, 净收入： %f\n", hours * BASE, BASE1 + (hours * BASE - 300) * RATE2, (hours * BASE) - (BASE1 + (hours * BASE - 300) * RATE2));
	else
		printf("工资总额：%f, 税金：%f, 净收入： %f\n", hours * BASE, BASE1 + BASE2 + (hours * BASE - 450.0) * RATE3, (hours * BASE) - (BASE1 + BASE2+ (hours * BASE - 450.0) * RATE3));

	return 0;
}


			
