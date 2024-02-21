#ifndef SORT_H
#define SORT_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
bool swap_array(int *array, int ind, int order);

/**
 * swap_array - swaps values of array at index ind and ind + 1
 * @array - main array to sort
 * @ind: index number to check
 * @order: 1 for ascending -1 for descending
 *
 * Return: true if swaped, else false
 */
bool swap_array(int *array, int ind, int order)
{
	if((order && (array[ind] > array[ind + 1])) ||
			(order < 0 && (array[ind] < array[ind + 1])))
	{
		int n = array[ind];
		array[ind] = array[ind + 1];
		array[ind + 1] = n;
		return(true);
	}
	return(false);
}

/**
 * swap_asce - swaps values of a and b if a > b
 * @a: a doubly linked list node to be compared
 * @b: a doubly linked list node to be compared
 *
 * Return: true if swaped, else false
 */

bool swap_list(listint_t *a, listint_t *b)
{
	if (a == b || a == NULL || b == NULL) {
        return false;
    }
	if(a->n > b->n)
	{
		listint_t *temp = a->next;
		a->next = b->next;
		b->next = temp;

		temp = a->prev;
		a->prev = b->prev;
		b->prev = temp;

		return true;
	}
	return(false);
}

void bubble_sort(int *array, size_t size);
#endif
