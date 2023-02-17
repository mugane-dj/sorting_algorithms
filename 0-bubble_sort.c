#include "sort.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * swap - swaps two elements in an array.
 *
 * @array: The array in which to swap the elements.
 * @index1: The index of the first element to swap.
 * @index2: The index of the second element to swap.
 *
 * Return: void
 */

int swap(int *array, size_t index1, size_t index2)
{
	int tmp = array[index1];

	array[index1] = array[index2];
	array[index2] = tmp;
	return (0);
}


/**
 * bubble_sort - Sorts an array of integers in ascending order.
 *
 * @array: The array to sort.
 * @size: The size of the array.
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	int i = 0;
	size_t j;

	if (array == NULL || size < 2)
		return;

	while (i == 0)
	{
		i = 1;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
				i = swap(array, j, j + 1);
		}
	}
	print_array(array, size);
}
