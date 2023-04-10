#include <stdio.h>
/**
* main - prints the number of arguments passed into it, followed by a new lin
* @argc:number  arguments
* @argv: list arguments
*
* Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
