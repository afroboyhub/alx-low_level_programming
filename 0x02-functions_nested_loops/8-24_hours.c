#include "main.h"

/**
 * jack_bauer - prints 24 hours
 * Return: 0
 */

void jack_bauer(void)
{
	int n1 = 0;
	int n2;

	while (n1 < 24)
	{
		n2 = n1;
		while (n2 < 60)
		{
			if (n2 != n1)
			{
				_putchar((n1 / 10) + 48);
				_putchar((n1 % 10) + 48);
				_putchar(':');
				_putchar((n2 / 10) + 48);
				_putchar((n2 % 10) + 48);
				_putchar('\n');
			}
			++n2;
		}
		++n1;
	}
}
