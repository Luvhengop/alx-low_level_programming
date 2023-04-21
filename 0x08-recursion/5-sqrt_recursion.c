#include "main.h"


/**
* actual_sqrt_recursion - recurses to find the natural
* @n: is the int being tested
* @j: is the place it cannot go to, test case
*
* Return: int
*/
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}

/**
* _sqrt_recursion - recursively find the value the sqrt using helper
* @n: integer number
*
*Return: an integer value for the sqrt, -1 if it failed to find natural sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
