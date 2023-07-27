#include "main.h"

/**
 * cap_string - capitalize all first letter
 * @str: param
 *
 * Return: new capitalized string
 */

char *cap_string(char *str)
{
	int i, j;

	char arr_sep[] = {32,9,10,44,59,46,33,63,34,40,41,123,125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == arr_sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
