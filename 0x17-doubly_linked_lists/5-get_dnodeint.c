#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: ptr->DLL struct
 * @index: nth node to return
 *
 * Return: ptr->nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	p = head;
	while (i < index)
	{
		p = p->next;
		if (!p)
			return (NULL);
		i++;
	}
	return (p);
}
