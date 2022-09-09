#include <stdio.h>

/**
 * main - prints alphabet in l_c
 *
 * Description: using the main function
 * program pritns alphabet in l_c except q and e
 * Return: 0
 */

int main(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	if (ab != 'e' && ab != 'q')
		putchar(ab);
	putchar('\n');

	return (0);
}
