#include "main.h"

/**
 *  _memcpy - copy string to string
 *  @dest: first param
 *  @src: second param
 *  @n: number of bytes to copy
 *
 *  Return: return new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
