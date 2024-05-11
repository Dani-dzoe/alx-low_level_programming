#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times
 */
void print_diagonal(int n)
{
	int a, b;

	if (a <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ' + '0');

		_putchar('\\');
		_putchar('\n');
	}
}

int main(void)
{
	print_diagonal(1);
	print_diagonal(8);
	print_diagonal(4);
	print_diagonal(-4);
	return (0);
}
