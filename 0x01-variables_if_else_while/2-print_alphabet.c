#include <stdio.h>

/**
 * main - printsthe alphabet in lowercase
 *
 * Description: using the main function
 * program prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);
	putchar('\n');

	return (0);
}
