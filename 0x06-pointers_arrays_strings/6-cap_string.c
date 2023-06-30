#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize first character */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Capitalize if preceded by a separator */
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			    str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			    str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			    str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			    str[i - 1] == '}')
			{
				str[i] -= 32;
			}
		}
	}

	return (str);
}
