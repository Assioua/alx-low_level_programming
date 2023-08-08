#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first param
 * @s2: second param
 *
 * Return: return pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, l;
	char *rst;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l2++;
	}

	l = l1 + l2;
	rst = (char *)malloc(sizeof(char) * (l + 1));
	if (rst == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		rst[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		rst[i] = s2[j];
	rst[l] = '\0';

	return (rst);
}
