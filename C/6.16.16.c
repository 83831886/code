#include <stdio.h>
int main(void)
{
	float Daphne = 100, Deirdre = 100;
	int i = 0;
	while (Daphne >= Deirdre)
	{
		Daphne += 100 * 0.1;
		Deirdre += 0.05 * Deirdre;
		i++;
	}
	printf("%d年\n", i);
	printf("Daphne的投资额是%f	Deirdre的投资额是%f\n", Daphne, Deirdre);
	return 0;
}
