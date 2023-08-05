#include "main.h"

/**
 * _isdigit - check if param is digit
 * @c: param passed by user
 * Return: returns  1 if digit 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
