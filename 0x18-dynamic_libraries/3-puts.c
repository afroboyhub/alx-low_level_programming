#include "main.h"

/**
 * _puts - prints a string followd by a new line to stdout
 * @str: string of characters
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
