#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum numbers
 * @a: first number
 * @b: second num
 *
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract numbers
 * @a: first num
 * @b: second num
 *
 * Return: substracted number result
 */
int op_sub(int a, int b)
{
	        return (a - b);
}

/**
 * op_mul - multiply numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	                return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	                return (a / b);
}

/**
 * op_mod - remainder of division of numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of division of a and b
 */

int op_mod(int a, int b)
{
	                return (a % b);
}
