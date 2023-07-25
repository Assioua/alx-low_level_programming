#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
*/

void _puts(char *str)
{
	do
	{
		_putchar(*str);
	}
	while (*str++);

	_putchar('\n');
}
