#include <stdio.h>

/**
 * main - prints all single digit num
 *
 * Description: using the main function
 * program prints all single digit num from 0
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(&num);
	putchar('\n');

	return (0);
}
