#include "main.h"

/**
 * _isupper - check if char is upper case
 * @c: param passed by user
 * Return: returns 0 if not upper case and 1 if upper case
*/

int _isupper(int c)
{
	int i, rs;

	rs = 0;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (i == c)
		{
			rs = 1;
		}
	}

	return (rs);
}
