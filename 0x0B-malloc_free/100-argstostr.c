#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  function that concatenates all the arguments of a program
 * @ac: argm counter
 * @av: arg holder
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int g, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (g = 0; g < ac; g++)
	{
		for (n = 0; av[g][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
	for (n = 0; av[g][n]; n++)
	{
		str[r] = av[g][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
