#include "main.h"

/**
 * times_table - prints the time table of 9
 */

void times_table(void)
{
	int num, times, ans;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			ans = times * num;

			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');
			_putchar((ans % 10) + '0');
		}
	_putchar('\n');
	}
}
