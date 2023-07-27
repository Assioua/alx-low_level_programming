#include "main.h"

/**
 * string_toupper - change lower case letters to upper case
 * @str: param
 * Return: returns the array with all letters in upper case
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
