
#include <stdlib.h>
		
#include "main.h"
		

		
/**
		
 * *_memset - fills memory with a constant byte
		
 * @s: memory area to be filled
		
 * @b: char to copy
		
 * @n: number of times to copy b
		
 *
		
 * Return: pointer to the memory area s
		
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return ('\0');
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
