#include "main.h"

/**
 * rev_string - reverse a string
 * @s: param
*/

void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = a ; b >= 0 ; b--)
	{
		if (s[b] != '\0')
		{
			_putchar(s[b]);
		}
	}
}
