#include <stdlib.h>
#include "sort.h"

/**
 * swap - swaps two elements in an array.
 *
 * @array: The array in which to swap the elements.
 * @index1: The index of the first element to swap.
 * @index2: The index of the second element to swap.
 *
 * Return: Void.
 */

int swap(int *array, size_t index1, size_t index2)
{
	int tmp = array[index1];

	array[index1] = array[index2];
	array[index2] = tmp;
	return (1);
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
	int *tmp = array;
	size_t i, j, position1 = 0, position2 = 0, size_tmp = size;
	int pivot = array[size - 1];
	size_t pivot_position = size - 1;
	int position1_changed = 0, position2_changed = 0;
	int has_swapped = 1;

	if (array == NULL || size < 2)
		return;

	while (has_swapped == 1)
	{
		has_swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (tmp[i] > pivot)
			{
				position1 = i;
				position1_changed = 1;
				break;
			}
		}
		if (position1_changed == 0)
		{
			size--;
			quick_sort(tmp, size);
		}
		for (j = -1; j >= -(size); j--)
		{
			if (tmp[j] < pivot)
			{
				position2 = j;
				break;
			}
		}
		if (position2_changed == 0)
		{
			size--;
			tmp++;
			quick_sort(tmp, size);
		}
		if (position1 < position2)
			has_swapped = swap(array, position1, position2);
		else
		{
			has_swapped = swap(array, position2, pivot_position);
			pivot_position = position2 - 1;
			size_tmp -= position2;
			quick_sort(tmp, size_tmp);
			pivot_position = size - 1;
			size_tmp = position2;
			tmp += (position2 + 1);
			quick_sort(tmp, size_tmp);
		}
	}
}
