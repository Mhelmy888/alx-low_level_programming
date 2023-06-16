#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of single-digit numbers.
 *              Numbers must be separated by comma and space.
 *              Numbers should be printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
