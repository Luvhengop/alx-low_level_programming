#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
