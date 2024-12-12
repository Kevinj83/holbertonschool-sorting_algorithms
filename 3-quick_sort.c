#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}

/**
 * quick_sort_rec - Recursively sorts sub-arrays using Quick Sort.
 * @array: The array to be sorted.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 * @size: The size of the array.
 */
void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_rec(array, low, pivot - 1, size);
		quick_sort_rec(array, pivot + 1, high, size);
	}
}

/**
 * partition - Partitions the array using the Lomuto scheme.
 * @array: The array to be partitioned.
 * @low: The starting index.
 * @high: The ending index.
 * @size: The size of the array.
 *
 * Return: The pivot index.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

