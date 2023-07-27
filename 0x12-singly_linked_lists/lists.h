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
#endif /*LISTS_H*/
