#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
