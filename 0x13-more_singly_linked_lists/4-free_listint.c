#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- Frees a linked list
 * @head: Points to a linked list
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
	}
	free(head);
}
