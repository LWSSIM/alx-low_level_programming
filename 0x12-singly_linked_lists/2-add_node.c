#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the start of (list_t) SLL
 * @head: 2*ptr to head
 * @str: str to the list
 *
 * Return: address of new element || NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t *));

	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
		new_node->next = *head;
	}

	new_node->next = *head;/*new now points to head*/

	*head = new_node;/*new_node is the head now*/

	new_node->str = strdup(str);/*input the str to new_node*/
	new_node->len = strlen(str);/*input the len to new_node*/

	return (new_node);
}
