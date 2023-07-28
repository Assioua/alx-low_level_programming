#include "main.h"

/**
 * rot13 - uses rot13 to switch letters
 *
 * @str: param
 * Return: returns new string
*/

char *rot13(char *str)
{
	char *alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alph1 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0; alph[j] != '\0' ;  j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = alph1[j];
				break;
			}

		}

	}
	return (str);
}
