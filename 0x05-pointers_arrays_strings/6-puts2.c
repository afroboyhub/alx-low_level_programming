#include "main.h"

/**
 * puts2 - pritns every other character of a string
 * @*str: parameter
 */

void puts2(char *str)
{
	while (*str)
		if (str % 2 == 0)
			_putchar(*str);
		*str++;
	_putchar('\n');
}
