#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 *
 * @ptr: first param
 * @old_size: second param
 * @new_size: third param
 *
 * Return: return pointer , if fail null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p2;
	char *p1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p2 = malloc(new_size);
	if (!p2)
		return (NULL);

	p1 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p2[i] = p1[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p2[i] = p1[i];
	}

	free(ptr);
	return (p2);
}
