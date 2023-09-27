#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a SLL
 * @head: ptr to the structure
 * @index: node's index
 * Return: node || NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	if (!head)
		return (NULL);

	n = 0;
	node = head;

	while (node && n < index)
	{
		node = node->next;
		n++;
	}
	return (node);
}
