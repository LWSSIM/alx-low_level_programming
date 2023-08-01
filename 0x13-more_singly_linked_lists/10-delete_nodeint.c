#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at certain idx
 * @head: ptr->ptr->SLL
 * @index: node to delete
 * Return: 1 S || 2 F
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *c;
	unsigned int x;

	if (!head || !*head)
		return (-1);

	c = *head;

	if (index == 0)
	{
		*head = c->next;
		free(c);
		return (1);
	}

	p = NULL;

	for (x = 0; x < index &&  c; x++)
	{
		p = c;
		c = c->next;
	}
	if (c)
	{
		p->next = c->next;
		free(c);
		return (1);
	}

	return (-1);
}
