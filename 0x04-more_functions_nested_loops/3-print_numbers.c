#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Description: using the print_numbers function
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i);
	_putchar('\n');
}
