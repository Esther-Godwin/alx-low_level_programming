#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Add new node at the end of a list
 * @head: The first element in the linked list
 * @str: String to add to the new node
 *
 * Return: Address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	new_node->str = str ? strdup(str) : NULL;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
