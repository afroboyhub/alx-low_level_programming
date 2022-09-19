#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len -1; intex >= len /2; index--)
		tmp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = tmp;
}
