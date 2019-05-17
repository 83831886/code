#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	int ch, w_sum, c_sum, pre;
	ch = w_sum = c_sum =  0;
	bool isword = false;

	while ((ch = getchar()) != EOF)
	{
		if (isspace(ch) && !isword)
			isword = true;
		if (!isspace(ch))
			c_sum++;
		pre = ch;
		if (isspace(pre) && isword)
			w_sum++;
	}
	printf("平均每个单词的字母数是%.1f\n", (float) c_sum / w_sum);

	return 0;
}
			

