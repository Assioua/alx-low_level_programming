#include "main.h"

/**
 * malloc_checked - termination function
 *
 * @b: param
 *
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);

}
