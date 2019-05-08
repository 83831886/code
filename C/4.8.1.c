#include <stdio.h>
int main(void)
{
	char a[10], b[10];

	printf("Please input your first name and last name: \n");
	scanf("%s %s", a, b);
	printf("%s, %s\n", b, a);

	return 0;
}

