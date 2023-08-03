#include "main.h"

/**
 * check_for_square - checks for the square root
 * @x:first param
 * @y:second param
 *
 * Return: int
 */
int check_for_square(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check_for_square(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: first param
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_for_square(1, n));
}
