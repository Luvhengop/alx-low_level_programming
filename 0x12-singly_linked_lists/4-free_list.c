#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 *
 * Description: go through the list while head is not NULL free the str
 *	element, then free the object itself then assign next of that element to
 *	next of head	then free head after everything is done
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head, *temp_2;

	while (temp)
	{
		free(temp->str);
		temp_2 = temp;
		temp = temp->next;
		free(temp_2);
	}
}
