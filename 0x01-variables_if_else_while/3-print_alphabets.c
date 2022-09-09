#include <stdio.h>

/**
 * main - prints the alphabet in l_c and then U_C
 *
 * Description: using the main function
 * program that prints l_c and U_C alphabet
 * Return: 0
 */

int main(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);
	for (ab = 'A'; ab <= 'Z'; ab++)
		putchar(ab);
	putchar('\n');

	return (0);
}
