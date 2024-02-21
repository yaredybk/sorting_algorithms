#include "sort.h"

/**
 * swap_array - swaps values of array at index ind and ind + 1
 * @array: main array to sort
 * @ind: index number to check
 * @order: 1 for ascending -1 for descending
 *
 * Return: true if swaped, else false
 */
bool swap_array(int *array, int ind, int order)
{
	if ((order && (array[ind] > array[ind + 1])) ||
			(order < 0 && (array[ind] < array[ind + 1])))
	{
		int n = array[ind];

		array[ind] = array[ind + 1];
		array[ind + 1] = n;
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
	bool swaped = false;
	size_t i;
	size_t n = size;

	do {
		size_t nn = 0;

		swaped = false;
		for (i = 0; i < n; i++)
		{
			swaped |= swap_array(array, i, 1);
			if (swaped)
				print_array(array, size);
			nn = i;
		}
		n = nn;
	} while (swaped);
}
