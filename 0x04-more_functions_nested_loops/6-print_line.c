#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: is the num of times the _ character will be printed
 * Return: 0
 */

void print_line(int n)
{
	int dsh;

	if (n > 0)
	{
		for (dsh = 0; dsh < n; dsh++)
			_putchar('_');
	}
	_putchar('\n');
}
