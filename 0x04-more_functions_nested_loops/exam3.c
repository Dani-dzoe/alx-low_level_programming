#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number
 * if n is 0 or less, print only \n
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

int main(void)
{
	print_line(0);
	print_line(3);
	print_line(7);
	print_line(-5);
	return (0);
}
