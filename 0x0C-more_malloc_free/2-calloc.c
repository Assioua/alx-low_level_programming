#include "main.h"

/**
 * _calloc - allocates memory for array
 *
 * @nmemb: param
 * @size: param
 *
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (x = 0; y < (nmemb * size); x++)
		x[y] = 0;
	return (x);
}
