#include "main.h"

/**
 * print_last_digit - prints and returnsbthe value of the last digit of an int
 * @n: integer being checked out
 *
 * Return: On success, return last digit @last.
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
