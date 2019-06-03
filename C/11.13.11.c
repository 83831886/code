#include <stdio.h>
#include <string.h>
#define ROWS 10
#define COLS 80
void final(char st[][COLS], int num);
void up(char st[][COLS], int num);
void asc(char (*st)[COLS], int num);
void print(char st[][COLS], int num);
int main(void)
{
	char (* st)[COLS];
	int i;
	char ch;
	for (i = 0; i < ROWS; i++)
		fgets(*(st + i), COLS, stdin);
	while (ch != '5')
	{
	puts("======================================================================");
	printf("1.打印源字符串列表		2.以ASCII中的顺序打印字符串\n");
	printf("3.按长度递增顺序打印字符串	4.按字符串中第一个单词的长度打印字符串\n");
	printf("5.退出\n");
	puts("======================================================================");

	puts("输入选项");
	scanf("%c", &ch);
	switch (ch)
	{
		case '1': print(st, ROWS);
			 break;
		case '2': asc(st, ROWS);
			 break;
		case '3': up(st, ROWS);
			 break;
		case '4': final(st, ROWS);
			 break;
		case '5': puts("退出");
			 break;
		default:  puts("请输入正确的选项！");
			 break;
	}
	getchar();

}


	return 0;
}
void print(char st[][COLS], int num)
{
	int i;
	for (i = 0; i < num && st[i] != NULL; i++)
		printf("%s",(st[i]));
}
void asc(char (*st)[COLS], int num)
{
	int i, j;
	char *temp;
	char *ss[COLS];

	for (i = 0; i < num; i++)
		ss[i] = st[i];

	for (i = 0; i < num; i++)
		for (j = i + 1; j < num; j++)
			if (strcmp(ss[i], ss[j]) > 0)
			{
				temp = ss[i];
				ss[i] = ss[j];
				ss[j] = temp;
			}
	for (i = 0; i < num; i++)
		puts(ss[i]);
}
void up(char st[][COLS], int num)
{
	int i, j;
	char * temp;
	char *ss[COLS];
	
	for (i = 0; i < num; i++)
		ss[i] = st[i];
	for (i = 0; i < num; i++)
		for (j = i + 1; j < num; j++)

		if (strlen(ss[j]) < strlen(ss[i]))
		{
			temp = ss[i];
			ss[i] = ss[j];
			ss[j] = temp;
		}
	for (i = 0; i < num; i++)
		puts(ss[i]);
	
}
void final(char st[][COLS], int num)
{
	int i, j, c = 0, k = 0;
	char * temp;
	char *ss[COLS];
	
	for (i = 0; i < num; i++)
		ss[i] = st[i];
	for (i = 0; i < num; i++)
		for (j = i + 1; j < num; j++)
			if ((strchr(ss[i], 32) - ss[i]) > (strchr(ss[j], 32) - ss[j]))
			{
				temp = ss[i];
				ss[i] = ss[j];
				ss[j] = temp;
			}
	for (i = 0; i < num; i++)
		puts(ss[i]);
}




