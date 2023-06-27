#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 *
 * Description: This function reverses the characters in the string
 * by swapping characters from the beginning and end of the string
 * until they meet in the middle.
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	/* Move the end pointer to the last character of the string */
	while (*end != '\0')
		end++;

	end--; /* Move back one position to skip the null terminator */

	/* Swap characters from the beginning and end until they meet in the middle */
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
