#include <stdio.h>
#define LEN 5
int main(void)
{
	char ch[LEN];

	fgets(ch, LEN, stdin);
	puts(ch);

	return 0;
}
