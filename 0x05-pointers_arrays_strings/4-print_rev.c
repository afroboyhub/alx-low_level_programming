#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len;

	while (*s++)
	{
		len = *s;
		while (len--)
			_putchar(*(s + len));
	}
	_putchar('\n');
}
