#include "main.h"
/**
 * print alphabet - prints the alpha in lowercase
 */
void print_alphabet(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n')
}
