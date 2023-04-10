#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives, one per line,ending with a new line
* @argc: number of commandline arguments
* @argv: list of commandline arguments
*
* Return: 0 Always(success)
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
