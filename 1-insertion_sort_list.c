#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 *                       ascending order using the Insertion Sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *swap;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		key = current;
		swap = current->prev;
		current = current->next;

		while (swap && key->n < swap->n)
		{
			if (swap->prev)
				swap->prev->next = key;
			else
				*list = key;

			if (key->next)
				key->next->prev = swap;

			key->prev = swap->prev;
			swap->next = key->next;
			key->next = swap;
			swap->prev = key;

			swap = key->prev;

			print_list(*list);
		}
	}
}
