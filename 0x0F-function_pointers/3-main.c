#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((int)strcmp(argv[3], "0") == 0) &&
		((((int)strcmp(argv[2], "/") == 0)) ||
		((int)strcmp(argv[2], "%") == 0)))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (func(atoi(argv[1]), atoi(argv[3]))));

	return (0);
}
