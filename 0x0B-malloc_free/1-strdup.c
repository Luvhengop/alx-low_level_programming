#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copie or duplicate to new memory space location
 * @str: char or string to copy
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *cop;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	cop = malloc(sizeof(char) * (i + 1));

	if (cop == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		cop[r] = str[r];

	return (cop);
}
