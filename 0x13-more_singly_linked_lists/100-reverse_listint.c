#include "lists.h"

/**
 * reverse_listint - reverses a SLL
 * @head: ptr->ptr->head of SLL
 * Return: ptr to 1st node after op.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *np;

	p = NULL;
	np = NULL;

	if (!*head || !(*head)->next)
		return (*head);

	p = *head;
	*head = NULL;

	while (p)
	{
		np = p->next;
		p->next = *head;
		*head = p;
		p = np;
	}

	return (*head);
}
