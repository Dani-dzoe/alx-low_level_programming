#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, 
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
