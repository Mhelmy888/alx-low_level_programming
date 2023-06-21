#include <stdio.h>

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
		for (mult = 1; mult <= n; mult++)
		{
			prod = num * mult;

			if (prod <= 9)
			{
				printf("  %d", prod);
			}
			else if (prod <= 99)
			{
				printf(" %d", prod);
			}
			else
			{
				printf("%d", prod);
			}

			if (mult < n)
				printf(",");
		}

		printf("\n");
	}
}
