#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1, append to
 * @s2: string 2, concatenate from
 * @n: number of bytes of @s2 to add or concatenate to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int l0, l1, f, g;
	char *str;

	/*treat NULL == empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	/*size of s1 & s2 respectively*/
	while (s1[l0] != '\0')
		l0++;
	while (s2[l1] != '\0')
		l1++;

	/*set n to size of s2*/
	if (n >= l1)
		n = l1;

	str = (char *) malloc((l0 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (i = 0; s1[f] != '\0'; f++)
		str[f] = s1[f];
	/*add s2 n bytes to str*/
	for (g = 0; g < n && s2[g] != '\0'; g++)
	{
		str[f] = s2[g];
		f++;
	}
	str[f] = '\0';
	return (str);
}
