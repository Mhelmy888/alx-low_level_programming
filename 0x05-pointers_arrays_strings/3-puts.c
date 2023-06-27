#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string
 *
 * Description: This function prints the characters of the string one by one
 * until it reaches the null terminator ('\0'), then it prints a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
