#include "main.h"

/**
 * more_numbers - print from 0 to 14 14times
*/

void more_numbers(void)
{
	int i, j, firstNbr, lastNbr;

	for (i = 0 ; i < 14 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
			{	
				firstNbr = j/10;
				lastNbr = j%10;
				_putchar('0' + firstNbr);
				_putchar('0' + lastNbr);
			}

			if (j < 10)
			{
				_putchar('0' + j);
			}
		}

		_putchar('\n');
	}
}
