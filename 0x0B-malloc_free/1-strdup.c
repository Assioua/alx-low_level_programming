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
	char *s = malloc(sizeof(str));
	int i;

	if (str == NULL)
	{	
		free(s);
		return (str);
	}
	else
	{
		for (i = 0; str[i] != '\0' ; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}
