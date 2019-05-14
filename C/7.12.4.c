#include <stdio.h>
int main(void)
{
	char ch;
	int th_juhao, th_gantanhao;
	th_juhao = th_gantanhao = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{	printf("!");
			th_juhao++;
		}
		else if (ch == '!')
		{	printf("!!");
			th_gantanhao++;
		}
		else
			printf("%c", ch);
	}
	printf("句号替换了%d次，感叹号替换了%d次.\n", th_juhao, th_gantanhao);
	return 0;
}
