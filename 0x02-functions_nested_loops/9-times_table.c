#include "main.h"

/**
 * times_table - print 9 times table
*/

void times_table(void)
{
	int i, j, r, lastNbr, firstNbr;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			r = i * j;

			if (r >= 10)
			{
				firstNbr = r / 10;
				lastNbr = r % 10;
				_putchar(firstNbr + '0');
				_putchar(lastNbr + '0');
				
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			if (r < 10)
			{
				_putchar('0' + r);
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}

		}

		_putchar('\n');
	}
}
