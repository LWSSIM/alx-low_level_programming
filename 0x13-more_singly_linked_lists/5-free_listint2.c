#include "lists.h"

/**
 * free_listint2 - free + ptr
 * @head: double ptr to SSL
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *temp;

	if (head == NULL)
		return;

	p = *head;
	while (p)
	{
		temp = p;
		p = p->next;

		free(temp);
	}
	*head = NULL;
}
