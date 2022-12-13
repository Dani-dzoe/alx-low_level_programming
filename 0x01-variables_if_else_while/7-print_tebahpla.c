#include <stdio.h>
/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char e;

	e = 'z';
	while (e >= 'a')
	{
		putchar(e);
		e--;
	}
	putchar('\n');

	return (0);
}
