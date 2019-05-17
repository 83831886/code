#include <stdio.h>
int main(void)
{
	int guess = 50, big = 100 , small = 1;
	char response;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	while (1)
	{	
		printf("猜大了还是猜小了：");
		response = getchar();
		if (response == 'b')
		{	
			big = guess;
			guess = (small + guess) / 2;
 		}
		else if (response == 's')
		{
			small = guess;
			guess = (big + guess) / 2;
		}
		else if (response == 'y')
			break;
		while (getchar() != '\n')
			continue;

		printf("Uh...is your number %d?\n", guess);
	}
	printf("I knew I could do it!\n");

	return 0;
}
