#include <stdio.h>
#include <stdbool.h>
void Prime(int m);
int main(void)
{
	int p,k;

	while (scanf("%d", &p) == 1)
	{
		printf("所有小于或等于该整数的素数有： ");
		for (k = 2; k <= p; k++)
		{
			Prime(k);
		}
		printf("\n");
	}

	return 0;
}

void Prime(int m)
{
	int i;
	bool isPrime;

	isPrime = true;
	for (i = 2; i * i <= m; i++)
	{
		if (m % i == 0)
			isPrime = false;
	}
	if (isPrime == true)
		printf("%d ", m);

}


				
