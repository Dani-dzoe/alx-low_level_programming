#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;
	
	if (argc == 3)
	{
		a = atoe(argv[1]);
		b = atoi(argv[1]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}