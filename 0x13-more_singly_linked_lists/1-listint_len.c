#include "lists.h"

/**
 * listint_len - return nb of elmnts in list
 * @h: ptr to DLL
 * Return: lenght of SLL
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
