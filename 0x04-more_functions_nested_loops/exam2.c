#include "main.h"

/**
 * more_numbers -  Prints 10 times the number, 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 20; j >= 0; j--)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

int main(void)
{
	more_numbers();
	return (0);
}
