#include "main.h"

/**
 * check_for_prime - check for prime
 * @x:first param
 * @y:second param
 * 
 * Return: returns if prime
 */
int check_for_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check_for_prime(x + 1, y));
}

/**
 * is_prime_number - find prime number
 * @n:int
 * Return: returns number if prime 
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_for_prime(2, n));
}
