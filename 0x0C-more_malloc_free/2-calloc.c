#include "main.h"

/**
 * _calloc - allocates memory for an array of a certain number
 * @n: number of elements
 * @size: byte size of each array element
 * Return: 0 of a pointer
 */
void *_calloc(unsigned int n, unsigned int size)
{
	void mem;
	char *filler;
	unsigned int index;

	if (n == 0 || size == 0)
		return (NULL);

	mem = malloc(size * n);

	if (mem == NULL)
		return (NULL);

	filler == mem;

	for (index = 0; index < (size * n); index++)
		filler[index] = '\0';

	return (mem);
}
