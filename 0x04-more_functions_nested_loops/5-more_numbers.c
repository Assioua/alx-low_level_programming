#include "main.h"

/**
 * more_numbers - print from 0 to 14 14times
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 14 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j/10);
				_putchar('0' + j%10);
			}

			if (j < 10)
			{
				_putchar('0' + j);
			}
		}

		_pûtchar('\n');
	}
}
