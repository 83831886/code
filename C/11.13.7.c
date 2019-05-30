#include <stdio.h>
#include <string.h>
#define LEN 5
#define S1_LEN 81
char * strnncpy(char * s1, char * s2, int n);
int main(void)
{
	char s1[S1_LEN];

	char s2[50];

	puts("Enter s2:");
	while (*fgets(s2, 50, stdin) != '\n')
		puts(strnncpy(s1, s2, LEN));
	
	return 0;
}

char * strnncpy(char * s1, char * s2, int n)
{
	int i = 0;
	char * temp = s1;

	while (*s2 != '\0' && i < n)
	{	
		*s1 = *s2;
		s2++;
		s1++;
		i++;
	}
	*s1 = '\0';
	return temp;
}

	

