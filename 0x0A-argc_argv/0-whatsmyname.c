#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: returns success
*/

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
