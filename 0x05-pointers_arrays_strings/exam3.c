#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len;

	while (*str != '\0')
	{
		len++;
		*str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "Flycat";
	puts_half(str);
	return (0);
}
