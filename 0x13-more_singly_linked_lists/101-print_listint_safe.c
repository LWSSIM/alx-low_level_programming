#include "lists.h"
#include <stdio.h>

/**
 * duplist - duplicates list in memory, ptr[]
 * @head: ptr-ptr->old lists head
 * @len: new list lenght = old + 1
 * @node: new node to add to SLL
 * Return: ptr->new list
 */
const listint_t **duplist(const listint_t **head,
		size_t len, const listint_t *node)
{
	const listint_t **newList;
	size_t n;

	newList = malloc(len * sizeof(listint_t *));
	if (!newList)
	{
		free(head);
		exit(98);
	}

	for (n = 0; n < len - 1; n++)
	{
		newList[n] = head[n];
	}

	newList[n] = node;
	free(head);
	return (newList);
}
/**
 * print_listint_safe - safely print content of a SLL
 * @head: ptr->ptr->head of SLL
 * Return: number of nodes in the SLL
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n;
	size_t idx = 0;
	const listint_t **sp = NULL;


	while (head)
	{
		for (n = 0; n < idx; n++)
		{
			if (head == sp[n])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(sp);
				return (idx);
			}
		}
		idx++;
		sp = duplist(sp, idx, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(sp);
	return (idx);
}
