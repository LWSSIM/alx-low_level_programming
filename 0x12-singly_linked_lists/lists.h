#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloced)
 * @len: strlen
 * @next: ptr to next node
 *
 * Description: SLL node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*print list elements (rtrn=n.nodes)*/
size_t print_list(const list_t *h);

/*returns SLL lenght*/
size_t list_len(const list_t *h);

/*adds node item at start of list*/
list_t *add_node(list_t **head, const char *str);

/*adds node at end of SLL*/
list_t *add_node_end(list_t **head, const char *str);
/*free list_t memory*/
void free_list(list_t *head);
#endif /*LISTS_H*/
