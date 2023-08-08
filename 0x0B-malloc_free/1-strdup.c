#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to the string param
 * @str: pointer param
 *
 * Return: return pointer to param string
*/

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = str;
		return (s);
	}
}
