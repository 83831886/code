#include <stdio.h>
#include <ctype.h>
#define YJ 2.05
#define TC 1.15
#define CARROT 1.09
#define DISCOUNT 0.05
#define YF1 6.5
#define YF2 14
int main(void)
{
	float yj, tc, carrot, s_yj, s_tc, s_carrot, sum, yf,discount;
	yj = tc = carrot = s_yj = s_tc = s_carrot = sum = yf = discount = 0.0;

	char ch;

	while (ch != 'q')
	{
		printf("*******************************************************************************************\n");
		printf("a) 洋蓟				b) 甜菜\n");
		printf("c) 胡萝卜			q) quit\n");
		printf("*******************************************************************************************\n");
		if (s_yj != 0)
			printf("您已购买%.2f磅的洋蓟。\n", s_yj);
		if (s_tc != 0)
			printf("您已购买%.2f磅的甜菜。\n", s_tc);
		if (s_carrot != 0)
			printf("您已购买%.2f磅的胡萝卜。\n", s_carrot);
	
		printf("\n请输入要购买的种类(选购完毕按q退出)： \n");
		ch = getchar();

	
		switch (ch)
		{
			case 'a': printf("输入洋蓟的磅数：");
				  while (scanf("%f", &yj) != 1)
				  { 
					 printf("请输入数字: \n");
					 while (getchar() != '\n')
						 ;
				  }
				  s_yj += yj;
				  printf("\n");
				  break;
			case 'b': printf("输入甜菜的磅数：");
				  while (scanf("%f", &tc) != 1)
                                  {
                                         printf("请输入数字: \n");
                                         while (getchar() != '\n')
                                                 ;
                                  }

			 	 s_tc += tc;
				  printf("\n");
			 	 break;


			case 'c': printf("输入胡萝卜的磅数：");
				  while (scanf("%f", &carrot) != 1)
                                  {
                                         printf("请输入数字: \n");
                                         while (getchar() != '\n')
                                                 ;
                                  }

				  
				  s_carrot += carrot;
				  printf("\n");
				  break;
			case 'q': break;
			default: break;
		}
	}
	if (s_yj == 0 && s_tc == 0 && s_carrot == 0)
	{
		printf("Bye.\n");
		return 0;
	}
	printf("洋蓟的售价是%.2f/磅,您订购的重量是%.2f磅\n", YJ, s_yj);
	printf("甜菜的售价是%.2f/磅,您订购的重量是%.2f磅\n", TC, s_tc);
	printf("胡萝卜的售价是%.2f/磅,您订购的重量是%.2f磅\n", CARROT, s_carrot);
	sum = s_yj * YJ + s_tc * TC + s_carrot * CARROT;
	if (sum  >=100)
	{	sum -= sum * DISCOUNT;
		discount = DISCOUNT;
	}
	else
		discount = 0;
	if ((s_yj + s_tc + s_carrot) <= 5)
	{
		sum += YF1;
		yf = YF1;
	}
	else if ((s_yj + s_tc + s_carrot) > 5 && (s_yj + s_tc + s_carrot) <= 20)
	{	sum += YF2;
		yf = YF2;
	}
	else 
	{
		yf = YF2 + ((s_yj + s_tc + s_carrot) - 20 ) * 0.5;
		sum += yf;
	}
	printf("蔬菜总重是%.2f磅,订单的总费用是%.2f美元,折扣是%.0f%%,运费和包装费是%.2f美元,费用总额是%.2f美元\n", s_yj + s_tc + s_carrot, s_yj * YJ + s_tc * TC + s_carrot * CARROT, discount * 100, yf, sum); 

	return 0;
}





