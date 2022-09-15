#include <stdio.h>

/**
 * main - prints sum of even numberd fibonacci sequence
 *
 * Description: using the main function
 * program prints sum of even numberd fibonacci
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float tot_sum;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
