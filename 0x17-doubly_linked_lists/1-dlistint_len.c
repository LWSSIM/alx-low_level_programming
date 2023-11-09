#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: ptr->DLL type struct
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p;
	int n = 0;

	if (!h)
		return (0);
	for (p = h; p; p = p->next)
		n++;
	return (n);
}
