#include "lists.h"

/**
 * sum_listint - return the sum of all data in a list
 * @head: ptr to SLL
 * Return: sum || 0
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	if (!head)
		return (0);

	p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
