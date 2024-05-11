#include "main.h"

/**
 * _puts - Prints a string
 * @str: string
 */
void _puts(char *str)
{
	int len = 0;

	while (*str)
	{
		len--;
		_putchar(*str--);
	}
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
