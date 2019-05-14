#include <stdio.h>
int main(void)
{
	char ch, chp;
	int sum = 0;

	while ((ch = getchar()) != '#')
	{
		if (chp == 'e' && ch == 'i')
			sum++;
		chp = ch;
	}
	printf("ei出现的次数是%d\n", sum);
	return 0;
}

