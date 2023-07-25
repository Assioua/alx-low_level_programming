#include "main.h"

/**
 * rev_string - reverse string
 * @s: param
 */
void rev_string(char *s)
{
	char a;
	int i, b, c;

	a = 0;
	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	c = b - 1;

	for (i = 0; i < b / 2; i++)
	{
		a = s[i];
		s[i] = s[c];
		s[c--] = a;
	}
}
