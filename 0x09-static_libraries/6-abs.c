#include "main.h"

/**
 * _abs - prints the absolute value of an input integer
 * @num : the int to check
 * Return: 1 (success) 0 (failure)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
