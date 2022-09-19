#include "main.h"

/**
 * pritn_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len = strlen;

	while (len--)
		_putchar(*(s + len));
	_putchar('\n');
}
