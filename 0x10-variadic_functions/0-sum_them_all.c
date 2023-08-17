#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: return sum or  0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
