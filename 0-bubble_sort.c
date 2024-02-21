#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: input array of integers to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	bool swaped = false;
	size_t i;

	do {
		swaped = false;
		for (i = 0; i < size; i++)
		{
			swaped |= swap_array(array, i, 1);
			print_array(array, size);
		}
	} while (swaped);
}
