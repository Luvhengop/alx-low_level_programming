#include "main.h"

/**
 * _strncpy - copy two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}

	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
