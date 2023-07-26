#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first param
 * @s2: second param
 * Return: returns 0 if strings are equal , if not a positive or negative number
*/

int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] > s2[i])
		{
			break;
		}


		{
			break;
		}
	}

	return (s1[i] - s2[i]);
}
