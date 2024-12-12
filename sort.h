#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Doubly linked list structure */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
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


#endif /* SORT_H */

