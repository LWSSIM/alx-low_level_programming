#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) in DDL.
 * @head: ptr->DLL head
 *
 * Return: sum of all data in DLL or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum = 0;

	if (!head)
		return (0);
	for (p = head; p; p = p->next)
	{
		sum += p->n;
	}
	return (sum);
}
