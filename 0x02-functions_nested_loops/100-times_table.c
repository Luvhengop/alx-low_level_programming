#include "main.h"

/**
 * print_times_table - prints the multiplicationntable from 0 to n
 * @n: the variable thatbstores the size of the tablen
 *
 * Return: null.
 */

void print_times_table(int n)

{
	int f, g, h;

	if (n >= 0 && n <= 15)
	{
		for (f = 0; f <= n; f++)
		{
			for (g = 0; g <= n; g++)
			{
				k = g * f;
				if (g == 0)
				{
					_putchar(h + '0');
				} else if (k < 10 && g != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(h + '0');
				} else if (h >= 10 && h < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((h / 10) + '0');
					_putchar((h % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((h / 100) + '0');
					_putchar(((h / 10) % 10) + '0');
					_putchar((h % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
