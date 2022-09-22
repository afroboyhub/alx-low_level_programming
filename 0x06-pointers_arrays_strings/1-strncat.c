#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @src: source file
 * @dest: destination file
 * @n: number of bytes
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}

	return (dest);
}
