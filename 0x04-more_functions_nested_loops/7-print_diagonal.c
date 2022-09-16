#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: the num of times \ will be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int hsh, spc;

	if (n > 0)
	{
		for (hsh = 0; hsh < n; hsh++)
		{
			for (spc = 0; spc < hsh; spc++)
				_putchar(' ');
			_putchar('\\');

			if (hsh == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
