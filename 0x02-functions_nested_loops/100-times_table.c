#include "main.h"

/**
 * print_times_table - Prints the times table of the input.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		_putchar(',');

		for (mult = 1; mult <= n; mult++)
		{
			prod = num * mult;

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod <= 99)
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod / 10) % 10);
				_putchar('0' + prod % 10);
			}

			if (mult < n)
				_putchar(',');
		}

		_putchar('\n');
	}
}
