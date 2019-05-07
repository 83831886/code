#include <stdio.h>
int main(void)
{
	float tall;

	printf("输入身高（英寸）： ");
	scanf("%f", &tall);
	printf("身高为%f厘米.\n", tall * 2.54);

	return 0;
}

