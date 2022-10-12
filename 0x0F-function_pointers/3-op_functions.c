#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: first given number
 * @b: second given number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that minus a from b or vice versa
 * @a: first given number
 * @b: second given number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	if (a > b)
	{
		return (a - b);
	} else
	{
		return (b - a);
	}
}

/**
 * op_mul - multiplies two numbers
 * @a: first given number
 * @b: second given number
 *
 * Return: the product of two numbers, a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first given number
 * @b: second given number
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the modulus of two numbers
 * @a: first given number
 * @b: second given number
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
