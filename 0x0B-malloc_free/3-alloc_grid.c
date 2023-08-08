#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to 2 dimension array
 * @width: width
 * @height: height
 *
 * Return: return pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **table, i, j;
	int l = width * height;

	if (l <= 0)
		return (NULL);

	table = (int **)malloc(sizeof(int *) * height);
	if (table == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		table[i] = (int *)malloc(sizeof(int) * width);
		if (table[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(table[i]);
			free(table);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			table[i][j] = 0;

	return (table);
}
