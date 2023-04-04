#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a node to the end of linked list
 * @head: Points to the list pointer
 * @n: Element to add
 *
 * Return: Address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
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
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
