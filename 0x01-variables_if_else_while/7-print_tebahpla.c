#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: return sucess
*/

int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
