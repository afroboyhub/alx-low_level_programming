#include <stdio.h>

/**
 * main - prints all posible combinations
 *
 * Description: using the main function
 * program prints all possible combinations
 * Return: 0
 */

int main(void)
{
	int com;

	for (com = 48; com <= 57; com++)
	{
		putchar(com);
		if (com != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
