#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node;
	list_t *temp_node;
	unsigned int string_len = 0;
	char *string;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		string_len = strlen(str);
		string = strdup(str);
	}
	else
	{
		string_len = 0;
		string = NULL;
	}
	new_node->str = string;
	new_node->len = string_len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else if (*head)
	{
		temp_node = *head;
		while ((temp_node)->next)
			temp_node = (temp_node)->next;
		(temp_node)->next = new_node;
	}
	return (new_node);
}
