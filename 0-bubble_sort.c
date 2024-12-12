#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	int swapped;

	if (!array || size < 2)
		return;

	for (n = size; n > 1; n--)
	{
		swapped = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size); /* Print array after each swap */
			}
		}
		if (!swapped)
			break;
	}
}

