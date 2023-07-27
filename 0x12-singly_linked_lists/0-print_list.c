#include "lists.h"

/**
 * print_list - print all elements of a list_t type list
 * @h: ptr to the list head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
