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
	unsigned int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
		return (count);

}
