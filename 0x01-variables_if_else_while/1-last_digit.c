#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- print the last digit and compare
 * Return: 0 if the last digit is zero and number otherwise 
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
        if (y > 5)
	  printf("Last digit of %d is %d and is grater than 5\n", n, y);
	else if (y < 6 && y != 0)
	  printf("Last digit of %d is %d and less than 6 and not 0\n", n, y);
	else if (y == 0)
	  printf("Last digit of %d is %d and is 0\n", n, y);
	return (0);
}
