#include <stdio.h>
#define JIALUN 3.785
#define YINGLI 1.609
int main(void)
{
	float licheng, qiyouliang;

	printf("Enter licheng and qiyouliang:");
	scanf("%f %f", &licheng, &qiyouliang);
	printf("%.1f\n", licheng/qiyouliang*YINGLI/JIALUN);

	return 0;
}
