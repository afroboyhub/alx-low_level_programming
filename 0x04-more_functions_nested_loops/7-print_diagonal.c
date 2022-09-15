#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: the num of times \ will be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int hsh;

	if (n > 0)
	{
		for (hsh = 0; hsh < n; hsh++)
			_putchar('\\');
	}
	_putchar('\n');
}
