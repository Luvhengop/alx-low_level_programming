#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list linked
 * Description: cycles through linked list until next points to null
 *	while adding to some counter variable
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	int j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}

	return (j);
}
