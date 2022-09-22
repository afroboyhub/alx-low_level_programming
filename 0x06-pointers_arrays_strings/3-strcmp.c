#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if s1 and s2 are equal
 * n if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ot = 0;

	while (ot == 0)
	{
		if ((*(s1 + i) == '\0' && (*(s2 + i) == '\0')))
		{
			break;
		}

		ot = *(s1 + i) - *(s2 + i);
		i++
	}

	return (ot);
}
