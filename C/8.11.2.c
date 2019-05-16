#include <stdio.h>
int main(void)
{
	int ch;

	int sum;
	while ((ch = getchar()) != EOF)
	{
		switch (ch)
		{
			case 10: printf("\\n  ", ch);
				 break;
			case 9: printf("\\t  ", ch);
				break;
			default: if (ch <= 32)
					 printf("Ctrl+%c %d  ", ch + 64, ch);
				 else
					 printf("%c %d  ", ch, ch);
				 break;
		
		}
		sum++;
		if (sum == 10)
		{	printf("\n");
			sum = 0;
		}


	}
 
	return 0;
}

