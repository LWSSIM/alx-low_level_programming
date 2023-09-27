#include "lists.h"

/**
 * find_listint_loop - find a loop within a SLL
 * @head: ptr->head of SLL
 * Return: node where loop starts || NULL if linear
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sp, *fp;

	sp = head, fp = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (fp && fp->next)
	{
		sp = sp->next;
		fp = fp->next->next;

		if (sp == fp)
		{
			sp = head;
			while (sp != fp)
			{
				sp = sp->next;
				fp = fp->next;
			}
			return (sp);
		}
	}
	return (NULL);
}
