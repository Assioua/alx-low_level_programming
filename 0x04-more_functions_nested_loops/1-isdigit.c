#include "main.h"

/**
 * _isdigit - check if param is digit
 * @c: param passed by user
 * Return: returns  1 if digit 0 if not
*/

int _isdigit(int c)
{
	int i, rs;

	rs = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == c)
		{
			rs = 1;
		}
	}

	return (rs);
}
