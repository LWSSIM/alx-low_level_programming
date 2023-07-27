#include "lists.h"

/**
 * list_len - returns linked list(type==list_t) lenght
 * @h: ptr to SLL head
 *
 * Return: lenght of SLL
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
