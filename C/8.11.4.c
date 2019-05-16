#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	int ch, w_sum, c_sum;
	ch = w_sum = c_sum = 0;
	bool isword = true;

	while ((ch = getchar()) != EOF)
	{
		if (isblank(ch))
			isword = false;
		else
			c_sum++;

		if (isword)
			w_sum++;
	}
	printf("%d %d\n", w_sum, c_sum);

	return 0;
}
			

