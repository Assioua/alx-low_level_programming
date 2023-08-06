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
	while(argc--)
	{
	printf("%s\n", *argv++);
	}

	return (0);
}
