#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: the number
 *
 * Return: returns 1,-1 or 0
*/

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}

	if (n == 0)
	{
		r = 0;
		_putchar('0');
	}

	if (n < 0)
	{
		r = -1;
		_putchar('-');
	}

	return (r);
}
