#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 100; i++);
	{
		putchar((i / 10) + '0');
		purchar((i % 10) + '0');
	}
	putchar('\n');

	return (0);
}
