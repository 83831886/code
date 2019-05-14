#include <stdio.h>
int main(void)
{
	float  c_oushu, c_jishu, sum_oushu, sum_jishu;
	c_oushu = c_jishu = sum_oushu = sum_jishu = 0.0;
	int num;

	while (scanf("%d", &num))
	{
		if (num == 0)
			break;
		if (num % 2 == 0)
		{	c_oushu++;
			sum_oushu += num;
		}
		else
		{	c_jishu++;
			sum_jishu += num;
		}
	}
	printf("输入的偶数个数是%.0f, 这些偶数的平均值是%.1f, 输入的奇数个数是%.0f, 奇数的平均值是%.1f.\n", c_oushu, sum_oushu / c_oushu, c_jishu, sum_jishu / c_jishu);

	return 0;
}

