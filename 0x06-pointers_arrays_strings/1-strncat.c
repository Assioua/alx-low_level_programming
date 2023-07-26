#include "main.h"

/**
 * _strncat - add string to other one based on number of bytes
 * @dest: first param
 * @src: second param
 * @n: number of bytes
 * Return: return a pointer to des
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		len++;
	}

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j + len] = src[j];
	}

	return (dest);
}
