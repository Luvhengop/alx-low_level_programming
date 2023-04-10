#include "main.h"

/**
 * _strlen - find length of the string
 * @s: string pointer
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i])
			i++;
		else
			break;
	}
	return (i);
}
