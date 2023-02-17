#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "sort.h"


/**
 * listint_len - check the number of elements in a doubly linked list.
 * @h: linked list of type dlistint_t.
 * Return: lenght of the doubly linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}

/**
 * swap_nodes - swaps nodes of a doubly linked list.
 *
 * @list: Double pointer to doubly linked list.
 * @curr_node: current node to be swapped.
 * @prev_node: previous node pointed to by curr_node.
 *
 * Return: void.
 */

void swap_nodes(listint_t **list, listint_t *curr_node, listint_t *prev_node)
{
	if (prev_node->prev != NULL)
	{
		curr_node->prev->next = curr_node->next;
		if (curr_node->next)
			curr_node->next->prev = curr_node->prev;
		prev_node->prev->next = curr_node;
		curr_node->prev = prev_node->prev;
		prev_node->prev = curr_node;
		curr_node->next = prev_node;
	}
	else
	{
		prev_node->prev = curr_node;
		curr_node->prev->next = curr_node->next;
		if (curr_node->next)
			curr_node->next->prev = curr_node->prev;
		curr_node->next = prev_node;
		curr_node->prev = NULL;
		/*set head to curr_node*/
		*list = curr_node;
	}
}

/**
 * insertion_sort_list - sorts a doubly linked list
 *			 in ascending order using insertion sort algorithm.
 *
 * @list: Double pointer to doubly linked list.
 *
 * Return: void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node = (*list)->next;
	listint_t *prev_node = NULL;
	size_t size;

	size = listint_len(*list);
	if (list == NULL || *list == NULL || (*list)->next == NULL || size < 2)
		return;

	while (curr_node != NULL)
	{
		if (curr_node->n < curr_node->prev->n)
		{
			prev_node = curr_node->prev;

			while (prev_node && (curr_node->n < prev_node->n))
			{
				swap_nodes(list, curr_node, prev_node);
				print_list(*list);
				prev_node = curr_node->prev;
			}
		}
		curr_node = curr_node->next;
	}
}
