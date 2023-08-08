#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to new string cpy
 * @str: param
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cpy = (char *)malloc((sizeof(str)));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';

	return (cpy);
}
