#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
