#include "sort.h"
/**
 * nod_swap - to swap for double link list
 * @p:pointer
 * @a:first nod
 * @b:second nod
 */
void nod_swap(listint_t **p, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*b)->prev->next = b;
	else
		*p = b;
	(*a)->prev = b;
	*a = b->prev;
}
/**
 * insertion_sort_list - to sort a doubly linked list
 * @list:pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *it, *ins, *tm;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (it = (*list)->next; it != NULL; it = tm)
	{
		tm = it->next;
		ins = it->prev;
		while (ins != NULL && it->n < ins->n)
		{
			nod_swap(list, &ins, it);
			print_list((const listint_t *)*list);
		}
	}
}
