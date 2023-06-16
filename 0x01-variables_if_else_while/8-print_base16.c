#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48; /* 48: decimal representation of 0 */

	while (digit <= 102) /* 102: decimal representation of 'f' */
	{
		putchar(digit);
		if (digit == 57) /* 57: decimal representation of '9' */
			digit += 39; /* after 9, we jump till 96 (decimal rep of 'a') */
		digit++;
	}

	putchar('\n');

	return (0);
}
