#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be treated
 *
 * Description: This function prints the second half of the string.
 * If the number of characters is odd, it prints the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Determine the starting index based on the length */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	/* Print the second half of the string */
	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
