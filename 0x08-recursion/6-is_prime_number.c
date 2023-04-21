#include "main.h"

/**
* is_prime_number - recursively find if @n is a prime number
* @n: integer number
*
*Return: an integer value for the sqrt, -1 if it failed to find natural sqrt
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
* actual_prime - calculates if a number is prime recursively
* @n: integer number
* @j: composite tester
*
*Return: an integer
*/

int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
