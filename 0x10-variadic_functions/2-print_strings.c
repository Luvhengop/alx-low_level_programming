#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by  new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...:variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int f;
	char *temp;
	va_list args;

	va_start(args, n);
	for (f = 0; f < n; f++)
	{
		temp = va_arg(args, char *);
		if (temp)
			printf("%s", temp);
		if (temp == NULL)
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
