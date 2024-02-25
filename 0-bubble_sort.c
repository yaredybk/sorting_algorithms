#include "sort.h"

/**
 * swap_array - swaps values of array at index ind and ind + 1
 * @array: main array to sort
 * @ind: index number to check
 *
 * Return: true if swaped, else false
 */
bool swap_array(int *array, int ind)
{
	if (array[ind + 1] && (array[ind] > array[ind + 1]))
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
	size_t i;
	size_t n;
	bool swaped = false;

	if (array == NULL || size == 0)
		return;
	n = size;

	do {
		size_t nn = 0;

		swaped = false;
		for (i = 0; i < n - 1; i++)
		{
			swaped |= swap_array(array, i);
			if (swaped)
				print_array(array, size);
			nn = i + 1;
		}
		n = nn;
	} while (swaped);
}
