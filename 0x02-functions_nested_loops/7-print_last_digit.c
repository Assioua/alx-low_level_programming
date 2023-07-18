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

	r = c % 10;

	_putchar('0' + r);

	return (r);
}
