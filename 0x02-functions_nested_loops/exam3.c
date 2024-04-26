#include "main.h"

/**
 * main - checks for lowercase char
 * Returns: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower('r');
	_putchar(r + '0');
	r = _islower(103);
	_putchar(r = '0');
	_putchar('\n');
	return (0);
}

