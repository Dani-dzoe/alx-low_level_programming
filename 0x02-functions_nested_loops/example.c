#include "main.h"

/**
 * main - prints a the alphabet in lowercase, followed
 * by a new line.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
