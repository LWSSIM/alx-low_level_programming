#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: ptr->DLL head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	if (!head)
		return;
	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
