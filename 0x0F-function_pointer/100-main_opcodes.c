#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints it's first @argc number of opcodes
 * @argc: argument count in numbers
 * @argv: argument values in array
 *
 * Return: 0 success, 1 or 2 Errors
 */

int main(int argc, char *argv[])
{
	int bytes, f;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (f = 0; f < bytes; f++)
	{
		if (f == bytes - 1)
		{
			printf("%02hhx\n", arr[f]);
			break;
		}
		printf("%02hhx ", arr[f]);
	}
	return (0);
}
