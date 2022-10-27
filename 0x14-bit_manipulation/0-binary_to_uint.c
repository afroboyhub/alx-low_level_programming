#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mul;
		mul *= 2;
	}

	return (num);
}
