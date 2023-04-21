#include "main.h"

/**
 * add - adds two numbers together
 * @num1: int 1
 * @num2: int 2
 * Return: result
 */
int add(int num1, int num2)
{
	int result;

	result = num1 + num2;

	return (result);
}

int add(int num1, int num2);
/**
 * main - adds two numbers together
 * Return: Always 0
 */
int main(void)
{
	int x = 230;
	int y = 450;
	int ret;

	ret = add(x, y);
	printf("%d\n", ret);

	return (0);
}
