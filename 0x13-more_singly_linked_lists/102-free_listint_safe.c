#include "lists.h"

/**
 * free_listint_safe - frees a SLLof type listint_t
 * @h: ptr->ptr->head
 * Return: size of the SLL that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	int count;

	if (*h == NULL)
		return (0);

	for (count = 0; *h; *h = (*h)->next, free(node), count++)
	{
		if (*h <= (*h)->next)
		{
			node = *h;
			free(node);
			count++;
			break;
		}
		node = *h;
	}

	*h = NULL;/*free head*/

	return (count);
}
