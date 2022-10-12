#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: a pointer to a funtion that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
