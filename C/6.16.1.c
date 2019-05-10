#include <stdio.h>
int main(void)
{
	int index;
       	char ch[26];

	for (index = 0; index < 26; index++)
	{
		ch[index] = 'a' + index;
		printf("%c\n", ch[index]);
	}
		
	return 0;
}
