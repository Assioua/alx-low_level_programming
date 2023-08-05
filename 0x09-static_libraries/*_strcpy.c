#include "main.h"

/**
 * _strncpy - copie a string to another
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: return the new string
*/

char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
