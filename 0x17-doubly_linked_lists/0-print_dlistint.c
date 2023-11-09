#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: ptr->DLL type struct
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p;
	int n = 0;

	if (!h)
		return (0);

	for (p = h; p; p = p->next)
	{
		printf("%i\n", p->n);
		n++;
	}
	return (n);
}
