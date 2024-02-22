#include "sort.h"

/**
 * swap_list - swaps values of a and b if a > b
 * @list: list pointer
 * @a: a doubly linked list node to be compared
 *
 * Return: the next node in the list without checking tail NULL
 */

listint_t *swap_list(listint_t **list, listint_t *a)
{
	listint_t *b, *c;

	if(a == NULL)
		return(a);
	if (*list == a || a->prev == NULL || a->n >= a->prev->n)
		return (a->next);
	b = a;
	do
	{
		b = b->prev;
	} while(b->prev != NULL && a->n < b->prev->n);

	if (a->n < b->n)
	{
		if (a->prev == b)
		{
			listint_t *tmpa, *tmpb;

			tmpa = a->next;
			tmpb = b->prev;
			if (tmpb)
				tmpb->next = a;
			else if (b == *list)
				*list = a;
			b->next = tmpa;
			a->next = b;
			if (tmpa)
				tmpa->prev = b;
			b->prev = a;
			a->prev = tmpb;
			print_list(*list);

			return b->next;
		}

		else
		{
			a->prev->next = a->next;
			c = a->next;
			if (c)
				c->prev = a->prev;
			if (b->prev)
				b->prev->next = a;
			else if (b == *list)
				*list = a;
			a->next = b;
			a->prev = b->prev;
			b->prev = a;
			print_list(*list);
			return (c);
		}
	}
	return (a->next);
}

/**
 * insertion_sort_list - sorts an list of integers in ascending order
 * using the Bubble sort algorithm
 * @list: input array of integers to be sorted
 * Returns: true if swaped else false 
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	tmp1 = *list;

	do {
		tmp1 = swap_list(list, tmp1);
	} while (tmp1);
}
