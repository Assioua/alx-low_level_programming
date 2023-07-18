#include "main.h"

/**
 * main - print all alphabets
 * Return: return 0
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
