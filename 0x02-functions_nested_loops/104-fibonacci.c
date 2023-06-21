#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib3;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %lu", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}
