#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numlber from n to 98
 * @n: number passed by user
*/

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d" ,n);
	}
	
	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d" ,i);
			if (i < 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}

	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d\n" ,i);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

}
