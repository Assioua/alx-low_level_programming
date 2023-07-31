#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @s: first param
 * @accept: second param
 *
 * Return: Returns the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 1;

	for (i = 0; accept[i] != '\0'; i++)
	{
	for (j = 0; s[j] != '\0'; j++)
	{
	if (accept[i] == s[j])
	{
	count++;
	break;
	}

	}
	if (i == count - 1)
	{
	break;
	}

	}
	return (count);
}
