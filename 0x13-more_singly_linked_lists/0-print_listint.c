#include "main.h"
#include <stdio.h>

/**
 * print_listint - prints all elmnts of listint_t list
 * @h: ptr to list
 * Return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int x;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
