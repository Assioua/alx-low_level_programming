#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - intilize a array
 * @size: size of array
 * @c: char to populate array with
 *
 * Return: returns value
*/

char *create_array(unsigned int size, char c)
{
	char *str = malloc((sizeof(char)) * size);
	unsigned int i;

	if (size == 0)
	{
	printf("failed to allocate memory\n");
	return (str);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	str[i] = c;
	}
	return (str);
	}
}
