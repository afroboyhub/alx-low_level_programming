#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: all the numbers of the parameter
 * @...: a variable of the parameters to add
 *
 * Return: sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int i, sum = 0;

	va_start(numb, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numb, int);
	va_end(numb);
	return (sum);
}
