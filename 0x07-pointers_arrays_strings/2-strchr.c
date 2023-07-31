#include "main.h"
#include <stddef.h>

/**
 *  _strchr - search in string
 *  @s: string param
 *  @c: char to search
 *
 *  Return: return pointer to string match
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}

	}
	return (p);
}
