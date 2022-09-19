#include "main.h"

/**
 * rev_string - reverse a string
 * @s: parameter
 */

void rev_string(char *s)
{
	char tmp;
	in i, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i ++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}
}
