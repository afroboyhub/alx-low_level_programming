#include "main.h"

/**
 * jack_bauer - prints 24 hours
 * Return: 0
 */

void jack_bauer(void)
{
	int n1 = 0;
	int n2;

	while (n1 <= 23)
	{
		n2 = 0;
		while (n2 <= 59)
		{
			_putchar((n1 / 10) + '0');
			_putchar((n1 % 10) + '0');
			_putchar(':');
			_putchar((n2 / 10) + '0');
			_putchar((n2 % 10) + '0');
			_putchar('\n');
		}
		++n2;
	}
	++n1;
}
