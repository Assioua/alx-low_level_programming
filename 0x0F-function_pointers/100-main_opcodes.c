#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes 
 * @a: main function adress
 * @n: number of bytes 
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - maiun function
 * @argc: nbr of args
 * @argv: args vector
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, j);
	return (0);
}
