#include "main.h"


/**
* is_prime_number - says if an integer is number
* or not number
* @n: integer number to evaluate
*
*Return: an integer value for the sqrt, -1 if it failed to find natural sqrt
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n > 2)
	{
	return (is_prime_number (2));
	}
	return (0);
}

/**
* test_prime  - calculates if a number is prime recursively
* @n: integer number
* @j: composite tester
*
*Return: an integer
*/

int test_prime(int n, int j)
{
	if (n % j == 0 && n != j)
	{
		return (0);
	}
	else if (n == j)
	{
		return (1);
	}
	return (test_prime(n, j + 1));
}
