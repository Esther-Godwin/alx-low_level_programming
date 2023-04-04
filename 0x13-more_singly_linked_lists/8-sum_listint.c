#include "lists.h"

/**
 * sum_listint - Sums all the data(n) of a list
 * @head: Points to the linked list
 *
 * Return: The sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
