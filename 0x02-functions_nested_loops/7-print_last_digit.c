#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: parameter
 *
 * Return: n % 10
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
