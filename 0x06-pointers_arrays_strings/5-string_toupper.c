#include "main.h"

/**
 * string_toupper - change lower case letters to upper case
 * @str: param
 * Return: returns the array with all letters in upper case
*/

char *string_toupper(char *str)
{
        int i = 0;
        int j;
        char x;

        while (str[i] != '\0')
        {
                i++;
        }

        for (j = 0; j < i; j++)
        {
                for (x = 'a'; x <= 'z'; x++)
                {
                        if (str[j] == x)
                        {
                                str[j] = x - 32;
                        }

                }

        }

        return (str);

}
