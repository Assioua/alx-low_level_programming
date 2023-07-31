#include "main.h"

/**
 *  _memset - copy from string to string
 *  @s: first param
 *  @b: second param
 *  @n: number of elements to copy
 *
 *  Return: return new string
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
