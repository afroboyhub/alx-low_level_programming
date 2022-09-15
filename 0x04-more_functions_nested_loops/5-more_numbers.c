#include "main.h"

/**
 * more_numbers - prints the numbers 0 -14 10 times
 */

void more_numbers(void)
{
	int tim;
	int num;

	for (tim = 0; tim < 10; tim++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
