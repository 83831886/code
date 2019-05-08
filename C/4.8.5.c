#include <stdio.h>
int main(void)
{
	float speed, filesize;

	printf("Enter speed Mb/s and filesize MB/s: ");
	scanf("%f %f", &speed, &filesize);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, filesize);
	printf("downloads in %.2f seconds.\n", filesize * 8 / speed);

	return 0;
}
