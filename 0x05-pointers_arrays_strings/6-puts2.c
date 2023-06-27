#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character
 * @str: Pointer to the string
 *
 * Description: This function iterates through the string and prints every other
 *              character, starting with the first character, until it reaches the null terminator.
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate through the string */
	while (str[i] != '\0')
	{
		/* Print the character if the index is even */
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
