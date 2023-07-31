#include "lists.h"

/**
 * listint_len - return nb of elmnts in list
 * @h: ptr to list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
