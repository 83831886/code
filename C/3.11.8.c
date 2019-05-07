#include <stdio.h>
int main(void)
{
	int beishu;

	printf("输入杯数：");
	scanf("%d", &beishu);

	printf("等价于%f品脱，等价于%f盎司，等价于%f汤勺，等价于%f茶勺。\n", beishu / 2.f, beishu * 8.f, beishu * 8.f * 2.f, beishu * 8.f* 2.f * 3.f);

	return 0;
}

