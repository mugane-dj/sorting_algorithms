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

void swap(int *array, int index1, int index2)
{
	int tmp = array[index1];

	array[index1] = array[index2];
	array[index2] = tmp;
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
	size_t i,  j, Running_Max;

	if (array == NULL || size < 2)
		return;
	Running_Max = array[0];

	for (i = 1; i < size; i++)
	{
		if (array[i] > Running_Max)
		{
			Running_Max = array[i];
			continue;
		}
		for (j = 0; j < i + 1; j++)
		{
			if (array[i] < array[j])
			{
				swap(array, i, j);
			}
		}
	}
	print_array(array, size);
}
