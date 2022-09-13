#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int x;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	}
	_putchar('\n');
}
