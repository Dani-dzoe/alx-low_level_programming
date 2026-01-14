#include <stdio.h>
/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char l;

	char c;

	l = 'a';
	c = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

int func(int a , int b)
{
	return (a + b);


}


int sub(int a, int b)
{
	return (a - b);
}


int funca()
{
	int a, b, sum;

	sum = func(a, b);

	return (0);
}
