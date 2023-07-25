#include "main.h"
#include <stdio.h>

/**
 *  _strlen - returns the length of a string
 * @s: param
 * Return: returns the numbers of caracters in a string
*/

int  _strlen(char *s)
{
	int size = 0;
	
	while (*s++)
	{
		size++;
	}

	return (size);
}
