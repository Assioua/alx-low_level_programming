#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main-check if number is greater than 5
 * Return : return nothing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>5)
	{
		printf("Last digit of %d is and is greater than 5", n);
	}
	if (n==0)
	{
		printf("Last digit of %d is and is 0", n);
	}
	if (n<5)
	{
		printf("Last digit of %d is and is less than 6 and not 0", n);
	}
	return (0);
}
