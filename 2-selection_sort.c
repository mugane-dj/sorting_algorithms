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
 * Return: Always 0
 */

int swap(int *array, size_t index1, size_t index2)
{
	int tmp = array[index1];

	array[index1] = array[index2];
	array[index2] = tmp;
	return (0);
}


/**
 * selection_sort - Sorts an array of integers in ascending order.
 *
 * @array: The array to sort.
 * @size: The size of the array.
 * Return: void.
 */

void selection_sort(int *array, size_t size)
{
	size_t i,  j, position1 = 0, position2 = 0;
	int Running_Min;

	if (array == NULL || size < 2)
		return;
	

	Running_Min = array[0];
	for (i = 0; i < size; i++)
	{
		for (j = position1; j < size; j++)
		{
			if (array[j] < Running_Min)
			{
				position2 = j;
				Running_Min = array[j];
			}
		}
		if (Running_Min != array[position1])
		{
			swap(array, position1, position2);
			print_array(array, size);
		}
		position1++;
		Running_Min = array[position1];
	}
}

