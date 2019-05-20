#include <stdio.h>
void chline(char, int, int);
int main(void)
{
	char ch;
	int i, j;

	while (scanf("%c %d %d", &ch, &i, &j) == 3)
	{
	chline(ch, i, j);
	}

	return 0;
}

void chline(char ch, int i, int j)
{
	int x, y;

	for (x = 0; x < j; x++)
	{
		for (y = 0; y < i; y++)
			printf("%c",ch);
		putchar('\n');
	}
}
