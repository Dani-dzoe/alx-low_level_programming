#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: Always 0
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
			printf("%d, ", a);
	}

	else if (n <= 98)
	{

		for (a = n; a <= 98; a++)
			printf("%d, ", a);
	}
	printf("\n");
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(19);
	print_to_98(100);
	print_to_98(78);
	return (0);
}

