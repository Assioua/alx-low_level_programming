#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the two params
 * @ac: first param
 * @av: second param
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			l++;
		l++;
	}

	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < l; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}