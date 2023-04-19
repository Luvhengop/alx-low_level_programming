#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function to run program
 * @s: operator passed to main
 *
 * Return: pointer to operation function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[j].f);
}
