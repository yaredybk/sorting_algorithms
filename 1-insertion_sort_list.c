#include "sort.h"

/**
 * swap_list - swaps values of a and b if a > b
 * @a: a doubly linked list node to be compared
 * @b: a doubly linked list node to be compared
 *
 * Return: true if swaped, else false
 */

bool swap_list(listint_t *a)
{
	listint_t *b;

	if (a == NULL)
		return (false);
	b = a->prev;
	if (a == b || b == NULL)
		return (false);
	while(a->n < b->n && b->prev != NULL)
		b = b->prev;
	if (a->n < b->n)
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

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: input array of integers to be sorted
 * @size: size of array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1;

	if (list == NULL || list->next == NULL)
		return;
	tmp1 = list;
	bool swaped = false;

	if (array == NULL || size == 0)
		return;
	n = size;

	do {

		swaped = false;
		while (tmp1->prev)
		{
			swaped |= swap_list(list, i, 1);

			if (swaped)
				print_array(array, size);
		}
		tmp1 = tmp1->next
	} while (swaped);
}
