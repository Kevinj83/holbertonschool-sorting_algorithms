#include "sort.h"

/**
 * main - Entry point to test the bubble sort algorithm.
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {5, 3, 8, 6, 2};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
