#include "main.h"

/**
 * malloc_checked - array for prints a string
 * @n: number of memory
 * Return: void
 */
void *malloc_checked(insigned int b)
{
	void *a;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
