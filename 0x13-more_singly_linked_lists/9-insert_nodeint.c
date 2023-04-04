#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts node at given index
 * @head: Points to the list pointer
 * @idx: Index to insert node at
 * @n: Data to store in new node
 *
 * Return: Address of nes node or NULLif it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (i < idx - 1 && temp)
		{
			temp = temp->next;
			i++;
		}
		if (i != idx - 1 && idx != 0)
			return (NULL);
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}

