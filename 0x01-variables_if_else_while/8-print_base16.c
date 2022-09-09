#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in l_c
 *
 * Description: using the main function
 * programs prints all the numbers of base 16 in l_c
 * Return: 0
 */

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
