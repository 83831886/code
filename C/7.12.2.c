#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;

	while ((ch = getchar()) != '#')
	{
		i++;
		if (ch == ' ')
			printf("空格-%d ", ch);
		else if (ch != '\n')
			printf("%c-%d ", ch, ch);
		if (i % 8 == 0 || ch == '\n')
		{	printf("\n");
			i = 0;
		}
	}
	printf("\n");
	return 0;
}
