#include "main.h"

/**
 * print_square - draws a square using #
 * @size: is the size of the square
 * Return: 0
 */

void print_square(int size)
{
	int ht, wd;

	if (size > 0)
	{
		for (ht = 0; ht < size; ht++)
		{
			for (wd = 0; wd < size; wd++)
				_putchar('#');

			if (ht == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
