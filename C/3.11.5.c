#include <stdio.h>
int main(void)
{
	short int age;

	printf("Input your age: ");
	scanf("%d", &age);
	printf("%e \n", 3.156e7 * age);

	return 0;
}

