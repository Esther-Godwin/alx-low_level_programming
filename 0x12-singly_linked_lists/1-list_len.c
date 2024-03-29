#include "lists.h"

/**
 * list_len - Get the number of elements in a list
 * @h: The head of the linked list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
