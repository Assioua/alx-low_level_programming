#include "main.h"

/**
 * _isalpha - check if param is a letter
 * @c: param passer by user
 *
 * Return: 1 if param is a letter and 0 if not
*/

int _isalpha(int c)
{
	int r = 0;
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i == c)
		{
			r = 1;
		}
	}

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (i == c)
		{
			r = 1;
		}
	}

	return (r);
}
