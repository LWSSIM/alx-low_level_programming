#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at end of (list_t)SLL
 * @head: 2*ptr to 1st element
 * @str: input str to add as a (list_t)node
 *
 * Return: new node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *traverse;

	n = malloc(sizeof(list_t *));

	if (n == NULL)
		return (NULL);
	if (str == NULL)
	{
		n->str = NULL;
		n->len = 0;
		n->next = NULL;
	}
	if (*head == NULL)
	{
		*head = n;
		n->str = strdup(str);
		n->len = strlen(str);
		n->next = NULL;
	}

	traverse = *head;/*start at head*/

	while (traverse->next != NULL)/*find the end of SLL*/
		traverse = traverse->next;
	traverse->next = n;/*point it to new node*/

	n->next = NULL;/*ptr ops*/

	n->str = strdup(str);/*data ops*/
	n->len = strlen(str);

	return (n);
}
