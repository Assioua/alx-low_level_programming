#include "main.h"

/**
 * jack_bauer - prints all hours and minutes
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i <= 23 ; i++)
	{


		for (j = 0 ; j <= 59 ; j++)
		{
			if (i < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + i);
			}

			if (i >= 10)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}

				_putchar(':');

			if (j < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + j);
			}

			if (j >= 10)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}

			_putchar('\n');
		}

}
}
