#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)

{
	int i = 65;

	while (i <= 122)
	{
		if (i > 90 && i < 97)
		{
			i++;
			continue;
		}
		else if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
