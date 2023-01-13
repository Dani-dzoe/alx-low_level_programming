#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant bbyte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to ther memory area s
 */
char &_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n, i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @n: number of elements
 * @size: size of each elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int n, unsigned int size)
{
	char *p;

	if (n == 0 || size == 0)
		return (NULL);

	p = malloc(size * n);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, n * size);

	return (p);
}
