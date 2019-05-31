#include <stdio.h>
#include <string.h>
#define LEN 10
#define STR 80
void asc(char * st[LEN]);
void printo(int rows, int cols, char st[][cols]);
void menu(void);
int main(void)
{
	char  str[LEN][STR];
	char * ss[LEN];
	
	int k = 0;	
	int i;
	int c = 0;
	char j;
	for (i = 0; i < LEN; i++)
	{
		printf("请输入第%d个字符串：", i + 1);
		fgets(str[i], STR, stdin);
	}

	for (i = 0; i < LEN; i++)
	{
		ss[i] = str[i];
	}

	while (j != '5')
	{
	menu();



	puts("输入选项：");
	scanf("%c", &j);

	switch (j)
	{
		case '1':
			puts("已输入的字符串为：");
		       	printo(LEN, STR, str);
			break;
		case '2': asc(ss);
			  for (i = 0; i < LEN; i++)
				  puts(ss[i]);
			break;
		case '3': 
			break;
		case '4': 
			break;
		case '5': puts("再见");
			break;
		default:puts("请输入正确的选项！");
			break;
	}
	while (getchar() != '\n')
		continue;
	puts("\n");
	}

	return 0;
}
void menu(void)
{
	puts("----------------------------------------------------------------------------");
	printf("1.打印原字符串列表.		2.以ASCII中的顺序打印字符串.\n");
	printf("3.按长度递增顺序打印字符串.	(4.按字符串中第1个单词的长度打印字符串.\n");
	puts("5.退出.");
	puts("----------------------------------------------------------------------------");
}
	
void printo(int rows, int cols, char  st[][STR])
{
	int i;
	for (i = 0; i < rows; i++)
		puts(*(st + i));
}
void asc(char * st[LEN])
{
	char * temp;
	int top, seek;

	for (top = 0; top < LEN; top++)
		for (seek = top + 1; seek < LEN; seek++)
			if (strcmp(st[top], st[seek]) > 0)
					{
					temp = st[top];
					st[top] = st[seek];
					st[seek] = temp;
					}
	
	
}

