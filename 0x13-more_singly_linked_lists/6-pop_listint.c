#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Points to the list pointer
 * Return: The deleted node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
