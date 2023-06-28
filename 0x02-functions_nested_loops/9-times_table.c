#include "main.h"

/**
 * times_table - prints the nine times table
 * Return: 0
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			printf("%d, ", result);
		}
		printf("$\n");
	}
}

/**
 * main - print times table
 * Return: 0
 */

int main(void)
{
	times_table();
	return (0);
}

