#include <stdio.h>
/**
 * main - print all digits
 * Return: return success
*/

int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');

	return (0);
}
