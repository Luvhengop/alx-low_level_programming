#include "main.h"
#include <stdio.h>

/**
 *  naturals_three_five- finds multiples of 3 and 5 and sums them all
 *
 * Return: null.
 */
void naturals_three_five(void)

{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
