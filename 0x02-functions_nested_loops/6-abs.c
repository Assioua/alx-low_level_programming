#include "main.h"

/**
 * _abs - return absolute value
 * @c: param number passed by user
 *
 * Return: return absolute value of param
*/

int _abs(int c)
{
	int r = c;
	
	if (c < 0)
	{
		r = c * -1;
	}

	return (r);
}
