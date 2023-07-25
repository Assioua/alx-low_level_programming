#include "main.h"
#include <stdio.h>

/**
 * print_dev - print sentence in reverse
 * @s: param
*/

void print_rev(char *s)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for ( b = a ; b >= 0 ; b--)
	{	
		if (s[b] != '\0')
		{
		_putchar(s[b]);
		}
	}

	_putchar('\n');
}
