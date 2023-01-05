#include "main.h"

/**
 * _puts_recursion - this is a func to print string recursively
 * @s: parameter string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
