#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: The integer value stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: This structure represents a node in a doubly linked list.
 * It holds an integer value and pointers to both the previous and next
 * nodes in the list, allowing traversal in both directions.
 */
typedef struct listint_s
{
	const int n;           /**< The integer value stored in the node */
	struct listint_s *prev; /**< Pointer to the previous node */
	struct listint_s *next; /**< Pointer to the next node */
} listint_t;

/* Function Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_rec(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);

#endif

