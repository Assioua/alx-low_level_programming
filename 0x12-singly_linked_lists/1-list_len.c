#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 * @h: list name
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
