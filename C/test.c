#include <stdio.h>
 
int main(void)
{
    int times;
 
    double a,b,sum;
 
    printf("请输入您想计算的项数：(为0跳出)\n");
    scanf("%d",&times);
 
    while(times>0)
    {
        for(a=1.0,b=1.0,sum=0;b<=times;b=b+2)//计算单数项
            sum+=a/b;
        for(a=-1.0,b=2.0;b<=times;b=b+2)//计算双数项
            sum+=a/b;
        printf("无限数列，1.0-1.0/2.0+1.0/3.0-...的值为\n%f\n",sum);
 
        printf("\n请输入您想计算的项数：(为0跳出)\n");
        scanf("%d",&times);
 
    }
    return 0;
}
