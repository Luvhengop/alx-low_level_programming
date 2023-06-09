#include "main.h"

/**
* _puts_recursion - recursively prints a string and a new line
* @s: pointer to a string
*
*Return: Nothing
*
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
