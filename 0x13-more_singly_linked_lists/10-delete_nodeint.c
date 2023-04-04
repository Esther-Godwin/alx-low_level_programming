#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at a given index
 * @head: Points to the linked list pointer
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *temp = NULL;
	unsigned int i = 1;

	if (head && *head)
	{
		if (index == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		while (i < index && prev->next)
		{
			prev = prev->next;
			i++;
		}
		temp = prev->next;
		prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
