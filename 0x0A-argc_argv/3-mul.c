#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of args
 * @argc: first param
 * @argv: second param
 *
 * Return: return fail or success
 */

int main(int argc, char **argv)
{
	int count = 0;
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	count = x * y;
	printf("%d\n", count);

	return (0);
}
