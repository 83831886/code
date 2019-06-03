#include <stdio.h>
#include <ctype.h>
#define LEN 10
int main(void)
{
	char (*st)[LEN];
	int i = 0;
	int j = 0;
	for (j = 0; j < LEN; j++)
		fgets(st[j], LEN, stdin);
	
	i = 0;
	while (i < j )
	{
		puts(st[i]);
		i++;
	}
	return 0;
}
	
