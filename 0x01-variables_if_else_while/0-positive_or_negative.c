#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - calculating if n is equal to zero , negative or positive
*
 * Return: return nothing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
