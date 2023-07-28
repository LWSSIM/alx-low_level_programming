#include "lists.h"

/**
 * free_list - frees memory of list_t SLL
 * @head: ptr to 1st node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *traverse;

	traverse = head;

	while (traverse != NULL)
	{
		free(traverse->str);
		free(traverse);
		traverse = traverse->next;
	}
}
