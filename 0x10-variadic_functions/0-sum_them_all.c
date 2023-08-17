#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic sum function
 * @n: first param
 *
 * Return: sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
