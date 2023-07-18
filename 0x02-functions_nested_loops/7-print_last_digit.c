#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 * @c: param
 *
 * Return: returns the last digit of a number
*/

int print_last_digit(int c)
{
	int r;

	if(c < 0)
	{
		c = c * -1;
	}

	r = c % 10;

	return (r);
}
