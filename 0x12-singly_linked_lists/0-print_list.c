#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the element of the linked list
 *
 * Description: uses the linked lists pointers to the next node to
 *	traverse the singly linked list while the nodes are
 *	not pointing to NULL. Prints contents of str and len
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}

	return (j);
}
