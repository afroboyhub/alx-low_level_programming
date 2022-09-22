#include "main.h"

/**
 * *string_toupper - function that changes all lc letters of a string to uc
 * @s: string to process
 * Return: to pointer dest
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
