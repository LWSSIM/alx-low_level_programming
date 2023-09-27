#include "lists.h"

/**
 * free_listint - frees SLL
 * @head: ptr to head
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = head->next;

		free(p);
	}
}
