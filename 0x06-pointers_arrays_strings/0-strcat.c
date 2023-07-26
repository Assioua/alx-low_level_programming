#include "main.h"

/**
 * _strcat - add string to another
 * @dest: 1st param
 * @src: 2nd param
 * Return: pointer to the new string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;
	int len = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		len++;
	}

	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[j + len] = src[j];
	}

	return (dest);
}
