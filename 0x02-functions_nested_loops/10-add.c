#include "main.h"
/**
 *add - sum of two numbers.
 *@n: number to be added.
 *@p: number to be added.
 *
 *Return: sum.
 */
int add(int n, int p)
{
	int sum = n + p;
	return (sum);
}

int main(void)
{
	int m;

	m = add(12, 34);
	printf("%d\n", m);
	return (0);
}
