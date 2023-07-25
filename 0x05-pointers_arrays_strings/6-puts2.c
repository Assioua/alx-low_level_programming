#include "main.h"

/**
 * puts2 - prints char
 *
 * @str: param
 */
void puts2(char *str)
{
	int a, i;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i += 2)
	{
		_putchar(str[i]);
	}

}
