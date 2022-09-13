#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number starting at 0
 */

void print_times_table(int n)
{
	int num, times, ans;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				ans = num * times;

				if (ans <= 99)
					_putchar(' ');
				if (ans <= 9)
					_putchar(' ');

				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar(((ans / 10)) % 10 + '0');
				}
				else if (ans <= 99 && ans >= 10)
				{
					_putchar((ans / 10) + '0');
				}
				_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
