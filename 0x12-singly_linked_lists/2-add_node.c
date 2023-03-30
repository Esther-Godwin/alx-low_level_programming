#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Add a new node at the beginning of a list
 * @head: The first element in the list
 * @str: String to add to the new node
 *
 * Return: The address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	for (i = 0; str[i]; i++)
		;

	new_node->str = str ? strdup(str) : NULL;
	new_node->len = i;
	new_node->next = *head ? *head : NULL;
	*head = new_node;
	return (new_node);
}
