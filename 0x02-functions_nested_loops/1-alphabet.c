#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet -> prints alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
}
