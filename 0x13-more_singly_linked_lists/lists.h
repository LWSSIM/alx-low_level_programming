#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: ptr to the next node
 *
 * Description: SLL node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/*print allelmnts of sll*/
size_t print_listint(const listint_t *h);

/*return nb of elmnts printed*/
size_t listint_len(const listint_t *h);
#endif/*MAIN_H*/
