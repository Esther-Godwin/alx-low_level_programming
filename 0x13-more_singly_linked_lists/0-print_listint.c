#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a linked list
 * @h: points to the linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
