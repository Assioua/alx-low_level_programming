#include "function_pointers.h"

/**
 * print_name - print name
 * @name: first param
 * @f: second param
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)

		f(name);
}
