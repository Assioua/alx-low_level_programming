#include "main.h"

/**
 * _pow_recursion - calculate the x to power of y
 * @x: number
 * @y: power to number
 *
 * Return: returns x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	if (y > 0)
	{
	return  (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
