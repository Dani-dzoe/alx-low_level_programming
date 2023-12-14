#include <search_algos.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
		return -1;

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (prev + jump < size)
			prev += jump;
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);

	for (i = prev - jump; i <= (prev < size -1 ? prev : size - 1); i++)
	{
		printf("Value checked array[%lu} = [%d]\n", i, array[i]);

		if (array[i] == value)
			return i;
	}

	return -1;
}
