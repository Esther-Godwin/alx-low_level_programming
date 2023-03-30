#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: First node in the list
 *
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
}
