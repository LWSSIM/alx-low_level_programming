#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: ptr->DLL struct head
 * @n: input data
 *
 * Return: & new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		for (tail = *head; tail->next; tail = tail->next)
			;
		new->prev = tail;
		tail->next = new;
	}
	return (new);
}
