#include "main.h"
#include "sort.h"

int main(void)
{
	int array[] = {10, 80, 30, 90, 40, 50, 70};
	size_t n = sizeof(array) / sizeof(array[0]);

	printf("Unsorted array:\n");
	print_array(array, n);
	printf("\n");

	quick_sort(array, n);  // Perform quick sort

	printf("\nSorted array:\n");
	print_array(array, n);
	return (0);
}

