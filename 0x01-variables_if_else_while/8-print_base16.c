#include <stdio.h>

/**
 * main - print all numbers of base 16
 * Return: return sucess
*/

int main(void)
{
	char j;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}

	for (j = 'a' ; j <= 'f' ; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
