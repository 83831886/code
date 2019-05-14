#include <stdio.h>
int main(void)
{
	char ch;
	int c_space, c_huanhang, c_other;

	c_space = c_huanhang = c_other = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			c_space++;
		if (ch == '\n')
			c_huanhang++;
		if (ch != ' ' && ch != '\n')
			c_other++;
	}

	printf("%d 空格	%d 换行 %d其他\n", c_space, c_huanhang, c_other);

	return 0;
}
