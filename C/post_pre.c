#include <stdio.h>
#include <string.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;
	pre_b = ++b;
	printf("a a_post b pre_b \n");
	printf("%*d %*d %*d %*d\n", strlen("a"), a, strlen("a_post"), a_post, strlen("b"), b, strlen("pre_b"), pre_b);

	return 0;
}
