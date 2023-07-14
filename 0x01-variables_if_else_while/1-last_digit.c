#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - check if number is greater than 5
 * Return : return nothing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = x % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5", n, y);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d  and is 0", n, y);
	}
	if (n < 5)
	{
		printf("Last digit of %d is %d  and is less than 6 and not 0", n, y);
	}
	return (0);
}
