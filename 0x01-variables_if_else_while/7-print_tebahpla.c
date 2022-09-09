#include <stdio.h>

/**
 * main - prints l_c alphabet in reverse
 *
 * Description: using the main function
 * program prints the l_c alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	putchar('\n');

	return (0);
}
