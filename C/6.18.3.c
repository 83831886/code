#include <stdio.h>
#include <string.h>
#define LEN 100
void reverse_string(char * string);
int main(void)
{
	char str[LEN];
	int i;


	while (fgets(str, LEN, stdin) && str[0] != '\n')
	{
		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] == '\n')
				str[i] = '\0';
		}
		reverse_string(str);
		printf("%s\n", str);
	}

	return 0;
}

void reverse_string(char * string)
{
	char * last_str;

	for (last_str = string; *last_str != '\0'; last_str++)
		;

	last_str--;

	while (string < last_str)
	{
		char temp;

		temp = *string;
		*string++ = *last_str;
		*last_str-- = temp;
	}
}

