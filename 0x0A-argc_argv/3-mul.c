#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers,print the result of the multiplication
* @argc: number  arguments
* @argv: list  arguments
*
* Description:
* If the program does not receive two arguments,
* program should print Error, followed by a new line, and return 1
*
* Return: 0 (successful). 1 (error)
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
