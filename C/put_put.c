#include <stdio.h>
#include "put1.c"
#include "put2.c"
int main(void)
{
	put1("If I'd as much money");
	put1(" as I could spend,\n");
	printf("I count %d characters.\n",
			put2("I never would cry old chairs to mend."));

	return 0;
}
