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
/*add node at start of SLL*/
listint_t *add_nodeint(listint_t **head, const int n);
/*add node atr end SLL*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*Frees list*/
void free_listint(listint_t *head);
/*frees a list*/
void free_listint2(listint_t **head);
/*delete head node and return data*/
int pop_listint(listint_t **head);
/*return nth node*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*sums all data(n) in a SLL*/
int sum_listint(listint_t *head);
/*insert a new node in a position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*delete node at index*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*advanced*/
/*reverse a SLL*/
listint_t *reverse_listint(listint_t **head);
/*print safe a SLL*/
size_t print_listint_safe(const listint_t *head);
/*free safe a SLL*/
size_t free_listint_safe(listint_t **h);
/*find loop in a SLL*/
listint_t *find_listint_loop(listint_t *head);

/*helper functions*/
listint_t *find_listint_loop_free(listint_t *head);
const listint_t **duplist(const listint_t **head, size_t len, const listint_t *node);
#endif/*MAIN_H*/
