#include <stdlib.h>
#include "sort.h"

/**
 * swap_int - swaps two elements in an array.
 *
 * @array: The array in which to swap the elements.
 * @index1: The index of the first element to swap.
 * @index2: The index of the second element to swap.
 *
 * Return: Void.
 */

void swap_int(int *array, int index1, int index2)
{
	int tmp = array[index1];

	array[index1] = array[index2];
	array[index2] = tmp;
}

/**
 * quick_sort - sorts an array of integers using quick sort algorithm.
 *
 * @array: array to be sorted.
 * @size: size of the array.
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	size_t placeholder_exclude;
	int exclude;

	if (size % 2 != 0)
	{
		placeholder_exclude = (size / 2) + 1;
		exclude = array[placeholder_exclude];
	}
	while (i < size)
	{
		if (i == exclude)
			continue;
		else
		{
			if (array[i] > array[i + 1])
			{
				swap(array, i, i + 1);
			}
			i += 2;
		}
	}
}
