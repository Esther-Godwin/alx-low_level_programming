#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list
 * @head: Points to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *element;

	while (head && *head)
	{
		element = *head;
		*head = (*head)->next;
		free(element);
	}
}
