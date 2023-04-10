#include "main.h"

/**
 * _memcpy - this fuction copies memory area
 * @dest: pointer to char par
 * @src: pointer to char par
 * @n: number of the bytes
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
