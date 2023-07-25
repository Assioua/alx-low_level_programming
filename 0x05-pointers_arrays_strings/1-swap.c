#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first param int
 * @b: second int param
*/
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
