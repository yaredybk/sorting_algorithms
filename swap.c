#include"sort.h"


/**
 * swap_list - swaps values of a and b if a > b
 * @a: a doubly linked list node to be compared
 * @b: a doubly linked list node to be compared
 *
 * Return: true if swaped, else false
 */

bool swap_list(listint_t *a, listint_t *b)
{
	if (a == b || a == NULL || b == NULL)
		return (false);
	if (a->n > b->n)
	{
		listint_t *temp = a->next;

		a->next = b->next;
		b->next = temp;

		temp = a->prev;
		a->prev = b->prev;
		b->prev = temp;

		return (true);
	}
	return (false);
}
