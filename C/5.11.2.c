#include <stdio.h>
int main(void)
{
	int num;
	int i = 0;

	printf("Enter a integer: ");
	scanf("%d", &num);
	while (i++ < 11)
	{
		printf("%d\n", num);
	       	num++;
	}
        return 0;
}	
