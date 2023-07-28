#include "main.h"


/**
 * leet - change letters to nums according to leet code
 * 
 * @str: param
 * Return: returns new sentence with nums
*/

char *leet(char *str)
{
        int i, x;
        int j = 0;
        unsigned char alph[] = {'A' , 'E' , 'O' , 'T' , 'L'};
        unsigned char alph2[] = {'a' , 'e' , 'o' , 't' , 'l'};
        unsigned char num[] = {4 , 3 , 0, 7 , 1};

        for (x = 0; x < 5; x++)
        {
                
                for (i = 0; str[i] != '\0'; i++)
                {

                if (str[i] == alph[j]  || str[i] == alph2[j])
                {
                        str[i] = num[j] + '0';
                }
                
        }
                j++;
        }
        
        return (str);
        
}

