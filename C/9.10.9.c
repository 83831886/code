#include <stdio.h>
#include <ctype.h>
void menu(void);
int work(int, int);
int main(void)
{
	menu();
	printf("%d\n",work(1, 4));
	 
	return 0;
}

void menu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copy files		2) move files\n");
	printf("3) remove files		4) quit\n");
	printf("Enter the number of your choice: ");

}

int work(int x, int y)
{

	int d;

	while (1)
	{
		scanf("%d", &d);
		 if (d > y || d < x)
			menu();
		else 
			return d;
		while (getchar() != '\n')
			continue;
	}


}
