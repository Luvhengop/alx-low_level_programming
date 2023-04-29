#include "main.h"

/**
 * _abs - returns the absolute value of a given integer
 * @n: integer being checked out
 *
 * Return: On success, return positive equivalent of n.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
