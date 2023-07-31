#include "lists.h"

/**
 * add_nodeint_end - add new node to the SLL
 * @head: dbl ptr to head of SLL
 * @n: data to input
 *
 * Return: adrss to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *traverse;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	traverse = *head;
	while (traverse->next)
		traverse = traverse->next;

	traverse->next = new;

	return (new);
}
