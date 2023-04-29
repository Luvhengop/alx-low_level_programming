#include "main.h"
#include <stdio.h>

/**
 *  fibonacci_50 - finds the first 50 fibo nums from 1, 2.. and prints them.
 *
 * Return: null.
 */
void fibonacci_50(void)

{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
