#include "3-calc.h"

/**
 * op_add - calc the sum of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calc the diff of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calc the product of two int
 * @a: 1st int
 * @b: 2nd int
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calc the division of two int
 * @a: 1st int
 * @b: 2nd int
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calc the remainder of the division of two int
 * @a: 1st int
 * @b: 2nd int
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
