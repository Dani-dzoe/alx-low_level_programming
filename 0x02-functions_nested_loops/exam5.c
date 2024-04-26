#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * main - check the code
 * Returns: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a + '0');
	_putchar('\n');
}

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
