#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: first param
 * @accept: second param
 *
 * Return: a pointer to the matching byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *count = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
	{
	count = &s[i];
	break;
	}

	}
	if (count != NULL)
	{
	break;
	}

	}
	return (count);
}
