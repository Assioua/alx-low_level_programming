#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints arguments passed to main
 * @argc: arg count
 * @argv: arg vector
 *
 * Return:  return success
*/

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)*argv;

	return (0);
}
