#include <stdio.h>
/**
 * main - print combination of all digits
 * Return: return success
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
