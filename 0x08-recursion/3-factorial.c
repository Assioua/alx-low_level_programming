#include "main.h"

/**
 * factorial - calculate facotrial of a number
 * @n: number param
 *
 * Return: returns factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	if (n == 0)
	{
		return (1);
	}
	else
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
