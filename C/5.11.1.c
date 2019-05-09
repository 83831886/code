#include <stdio.h>
#define M_PER_H 60
int main(void)
{
	int min;

	printf("Enter minutes: ");
	scanf("%d", &min);
	while (min > 0)
	{
		printf("%d hours and %d minutes.\n", min / M_PER_H, min % M_PER_H);
		printf("Enter minutes: ");
		scanf("%d", &min);

	}
	printf("Done!\n");
	return 0;
}
