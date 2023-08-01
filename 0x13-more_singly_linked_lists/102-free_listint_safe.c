#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_free - find a loop within a SLL
 * @head: ptr->head of SLL
 * Return: node where loop starts || NULL if linear
 */
listint_t *find_listint_loop_free(listint_t *head)
{
	listint_t *ps, *pe;


	if (!head)
		return (NULL);

	for (pe = head->next; pe != NULL; pe = pe->next)
	{
		if (pe == pe->next)
			return (pe);

		for (ps = head; ps != pe; ps = ps->next)
		{
			if (ps == pe->next)
				return (pe->next);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a SLLof type listint_t
 * @h: ptr->ptr->head
 * Return: size of the SLL that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *loop_id;
	size_t node_count;
	int loop = 1;

	if (!h || !(*h))
		return (0);

	loop_id = find_listint_loop_free(*h);

	for (node_count = 0; (*h != loop_id || loop) && !(*h); *h = node)
	{
		node_count++;
		node = (*h)->next;

		if (*h == loop_id && loop)
		{
			if (loop_id == loop_id->next)
			{
				free(*h);
				break;
			}

			node_count++;
			node = node->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (node_count);
}
