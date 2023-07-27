#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first param
 * @s2: second param
 * Return: returns 0 if strings are equal , if not a positive or negative number
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
