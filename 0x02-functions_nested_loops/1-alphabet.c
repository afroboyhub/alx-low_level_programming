#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase
 * _putchar - prints alphabet in l_c
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
