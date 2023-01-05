#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - this is a func to print string recursively
 * @s: parameter string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursions(s);
}
