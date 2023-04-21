#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else if (*s != '\0')
	{
		return (test_palindrome(s, (int)strlen(s) - 1));
	}
	return (0);
}

/**
 * test_palindrome - use cases to find palindrome
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * @i: index of last check
 *
 * Return: length of the string
 */

int test_palindrome(char *s, int i)
{
	if (i <= 0)
	{
		return (1);
	}
	else if (*s == s[i])
	{
		return (test_palindrome(++s, i - 2));
	}
	return (0);
}
