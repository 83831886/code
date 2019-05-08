#include <stdio.h>
int main(void)
{
	float height;
	char name[40];

	printf("Please enter your height and name: ");
	scanf("%f %s", &height, name);
	printf("%s, you are %.3f feet tall\n", name, height);

	return 0;
}
