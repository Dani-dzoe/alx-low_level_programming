#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @n: number of items in array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
}
