#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */


void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		if (i == 122)
		{
			putchar('\n');
		}
		i++;
	}
}
