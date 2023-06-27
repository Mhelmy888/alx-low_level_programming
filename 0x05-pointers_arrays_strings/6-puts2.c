#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 *
 * Description: This function iterates through the string and prints every other
 *              character, starting with the first character, until it reaches
 *              the null terminator.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i += 2;
	}

	_putchar('\n');
}
