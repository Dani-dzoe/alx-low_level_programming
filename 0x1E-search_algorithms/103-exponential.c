#include "search_algos.h"

/**
 * print_array - Prints an array in the specified range
 * @array: Pointer to the array to point
 * @start: Starting index
 * @end: Ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}


/**
 * exponential_search - Searches for a value in a sorted array using 
 * exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: NUmber of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	if (array[0] == value)
		return 0;

	size_t i = 1;

