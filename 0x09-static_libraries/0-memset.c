#include "main.h"

/**
 * _memset - this fill a block of memory with a specific value
 *@r: the starting address of the memory to be filled
 *@d: the desired value
 *@b: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *r, char d, unsigned int b)
{
	int i = 0;

	for (; b > 0; i++)
	{
		r[i] = d;
		b--;
	}
	return (r);
}
