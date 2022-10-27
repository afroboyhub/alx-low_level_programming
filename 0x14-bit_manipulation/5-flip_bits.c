#include "main.h"

/**
 * flip_bits - returns the numb of bits u need to flip to get from one numb to
 * @n: the number
 * @m: the number of flips
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
