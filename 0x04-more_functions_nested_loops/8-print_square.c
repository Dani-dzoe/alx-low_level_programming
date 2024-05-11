#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}
