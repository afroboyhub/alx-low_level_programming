#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x, 10);
	_putchar('\n');
}
