#include "lists.h"

/**
 * add_nodeint - add node at head
 * @head: double ptr to 1st node(head)
 * @n: input to node data
 *
 * Return: ptr to new node(1st)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t *));/*ptr to structure*/

	if (!new)
		return (NULL);

	new->next = *head; /*point to inital head position*/

	*head = new; /*new is noe the 1st elmnt*/

	new->n = n;

	return (new);
}
