# include <stdio.h>



int main(void)

{
	int kuatuo;
	 
	printf("请输入夸脱数： ");
	scanf("%d", &kuatuo);
	printf("水分子的数量是%e\n", kuatuo * 950.0 / 3.0e-23);

    return 0;

}
