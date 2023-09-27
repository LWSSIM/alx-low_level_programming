#include "lists.h"

/**
 * pop_listint - delete node head
 * @head: ptr to SSL
 * Return: head node data || 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (!head || !*head)
		return (0);

	current = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = current;

	return (n);
}
