#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;
	
	index = len - 1
	while (index--)
		_putchar(s[index]);

	_putchar('\n');
}
