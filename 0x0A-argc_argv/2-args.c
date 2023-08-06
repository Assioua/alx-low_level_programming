#include <stdio.h>

/**
 * main - returns arguments passed to main
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: return sucess
*/

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
