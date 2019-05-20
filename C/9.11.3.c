#include <stdio.h>
void ww(char, int, int);
int main(void)
{
	char ch;
	int x, y;
	

	scanf("%c %d %d", &ch, &x, &y);
	ww(ch, x, y);

	return 0;
}

void ww(char ch, int x, int y)
{
	int i, j;

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
			printf("%c", ch);
		putchar('\n');
	}

}
