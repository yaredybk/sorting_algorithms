#include "sort.h"

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

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: input array of integers to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t n;
	bool swaped = false;

	if (array == NULL || size == 0)
		return;
	n = size;

	do {
		size_t nn = 0;

		swaped = false;
		for (i = 0; i < n; i++)
		{
			swaped |= swap_list(array, i, 1);
			if (swaped)
				print_array(array, size);
			nn = i;
		}
		n = nn;
	} while (swaped);
}
