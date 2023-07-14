#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Main : calculating if n is equal to zero , negative or positive */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		puts("is zero");
	}
	if (n > 0)
	{
		puts("is positive");
	}
	if (n < 0)
	{
		puts("is negative");
	}
	return (0);
}
