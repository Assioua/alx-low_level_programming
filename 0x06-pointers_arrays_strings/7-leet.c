#include "main.h"

/**
 * leet - swap letter with nums
 * @str: param
 *
 * Return: new string with numbers
 */
char *leet(char *str)
{
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
			}
		}
	}

	return (str);
}
