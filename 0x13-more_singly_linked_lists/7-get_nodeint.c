#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a list
 * @head: Points to the list
 * @index: Index of the node to return
 *
 * Return: Node in the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;

	if (!head)
		return (NULL);

	while (index > 0 && i <= index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
