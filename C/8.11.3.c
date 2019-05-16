#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch, u_sum, l_sum;
	ch = u_sum = l_sum = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			l_sum++;
		else if (isupper(ch))
			u_sum++;
	}
	printf("大写字母个数：%d\n", u_sum);
	printf("小写字母个数：%d\n", l_sum);
	return 0;
}



