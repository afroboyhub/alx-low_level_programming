#include <stdio.h>

/**
 * main - prints all natural numbers multiples of 3 and 5
 *
 * Description: using the main funciton
 * program prints sum of multiples of 3 and 5 under 1024
 * Return: 0
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
