#include "main.h"
#include <stddef.h>

/**
 * _strstr - return substring if found in first string
 * @haystack: first string
 * @needle: substring
 *
 * Return: returns substring if found if not return null
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *p = NULL;

	while (haystack[i] != '\0')
	{
	j = 0;
	if (haystack[i] == needle[j])
	{
	p = &haystack[i];
	for (j = 1; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	{
	p = NULL;
	break;
	}
	}
	}
	i++;

	if (p != NULL)
	{
	break;
	}
	}
	return (p);
}
