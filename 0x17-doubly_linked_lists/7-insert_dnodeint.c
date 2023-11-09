#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: ptr->head node
 * @idx: insert position
 * @n: data input
 *
 * Return: ptr->new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *p;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	p = *h;
	while (i < idx)
	{
		p = p->next;
		if (!p)
			return (NULL);
		i++;
	}
	if (!p->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = p;
	new->prev = p->prev;
	p->prev->next = new;
	p->prev = new;
	return (new);
}
