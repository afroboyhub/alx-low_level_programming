#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: parameter
 *
 * Return: n % 10
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
