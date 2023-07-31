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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
