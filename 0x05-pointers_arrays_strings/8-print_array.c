#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements
 * @a: int param 1
 * @n: int param 2
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
		printf("%d", a[x]);
		printf("\n");
}
