#include "main.h"

/**
 * _islower - return 1 if param is lowercase
 * @c: number inserted by user
 *
 * Return: return 1 if param is lowercase and 0 if not
*/

int _islower(int c)
{
	int r = 0;

	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (c == i)
		{
			r = 1;
		}
	}

	return (r);
}
