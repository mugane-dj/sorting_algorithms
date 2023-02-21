#include <stdlib.h>
#include "sort.h"

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
 * quick_sort - sorts an array of integers using quick sort algorithm.
 *
 * @array: array to be sorted.
 * @size: size of the array.
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	int i = 0, j;
	int pivot = array[size - 1];

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < (int)size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			swap(array, i, j);
			i++;
		}
	}
	swap(array, i, size - 1);

	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
