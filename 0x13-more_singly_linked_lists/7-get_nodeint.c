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
	if (head == NULL)
		return (NULL);

	for (; index > 0 && head->next; head = head->next, index--)
		;
	if (index == 0)
		return (head);
	return (NULL);
}
