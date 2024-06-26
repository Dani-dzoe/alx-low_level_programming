#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; n++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

int main(void)
{
	print_diagonal(3);	
	print_diagonal(8);
	print_diagonal(-7);
	print_diagonal(1);
	return (0);
}
