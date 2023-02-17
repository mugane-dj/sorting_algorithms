#ifndef SORT_H
#define SORT_H
#include <stddef.h>

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


/*Prototypes*/

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
size_t listint_len(const listint_t *h);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *curr_node, listint_t *prev_node);
void swap(int *array, int index1, int index2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /*SORT_H*/
