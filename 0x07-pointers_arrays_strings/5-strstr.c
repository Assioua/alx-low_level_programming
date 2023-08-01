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
    int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
