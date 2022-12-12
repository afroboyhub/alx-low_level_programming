#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
