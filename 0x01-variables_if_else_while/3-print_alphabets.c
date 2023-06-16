#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print lowercase alphabet */
	for (i = 0; i < 26; i++)
	{
		char lowercase = 'a' + i;
		putchar(lowercase);
	}

	/* Print a newline */
	putchar('\n');

	/* Print uppercase alphabet */
	for (i = 0; i < 26; i++)
	{
		char uppercase = 'A' + i;
		putchar(uppercase);
	}

	/* Print a newline */
	putchar('\n');

	return (0);
}
