#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at certain index in SLL
 * @head: ptr->ptr->SLL
 * @idx: index of new node input
 * @n: input data
 * Return: prt->new_node || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	p = *head;

	while (p)
	{
		if (x == idx - 1)
		{
			new->next = p->next;
			p->next = new;
			return (new);
		}
		x++;
		p = p->next;
	}
	free(new);
	return (NULL);
}
