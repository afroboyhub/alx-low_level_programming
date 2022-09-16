#include "main.h"

/**
 * print_triangle - draws a triangle using #
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int ht, sd;

	if (size > 0)
	{
		for (ht = 1; ht <= size; ht++)
		{
			for (sd = size - ht; sd > 0; sd--)
				_putchar(' ');

			for (sd = 0; sd < ht; sd++)
				_putchar('#');

			if (ht == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
