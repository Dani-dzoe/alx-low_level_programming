#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		i--;
		s--;
	}
	return (s);
}
