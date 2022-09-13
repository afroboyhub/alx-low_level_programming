#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: parameter
 *
 * Return: n % 10
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
