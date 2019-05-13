#include <stdio.h>
int main(void)
{
	int i;
	int up, down;

	printf("Please enter up integer: ");
	scanf("%d", &up);
	printf("Please enter down integer: ");
	scanf("%d", &down);

	for (i = 0; i < up - down + 1; down++)
	{
		printf("%d	%d	%d\n", down, down * down, down * down * down);
	}
	
	return 0;
}
