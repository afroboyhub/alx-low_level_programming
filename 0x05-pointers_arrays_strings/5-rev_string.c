#include "main.h"

/**
 * rev_string - reverse a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int start, tmp;
	int end = 0;

	while (*(s + end) != '\0')
		end++;

	end = end - 1;
	start = 0;
	while (end > start)
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
}
