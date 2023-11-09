#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index linked list.
 * @head: ptr->head DDL struct
 * @index: node to be deleted
 *
 * Return: 1(succ) || -1(fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *c;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	c = *head;
	if (index == 0)
	{
		*head = c->next;
		c->prev = NULL;
		free(c);
		return (1);
	}
	p = NULL;
	for (i = 0; i < index && c; i++)
	{
		p = c;
		c = c->next;
	}
	if (c)
	{
		p->next = c->next;
		c->next->prev = p;
		free(c);
		return (1);
	}
	return (-1);
}