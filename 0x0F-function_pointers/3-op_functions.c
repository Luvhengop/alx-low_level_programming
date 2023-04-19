#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -  op_add - adds two integer numbers @a and @b and returns the sum
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the sum of @a and @b
 */

int op_add(int a, int b)

{
	return (a + b);

}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer numbers @a and @b
 * @a: number 1
 * @b: number 2
 *
 * Return: product of @a and @b
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - divides two integer numbers @a and @b
 * @a: number
 * @b: number
 *
 * Return: division result of @a and @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
