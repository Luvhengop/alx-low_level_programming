#include "main.h"
/**
 * *_strcpy - funtion that copy from one string variable to another
 * @dest: points to a string array
 * @src: copy from
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

