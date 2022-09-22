#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: source of file
 * @dest: destination of file
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int s = 0;
	int d = 0;

	while (dest[s] != '\0')
		s++;

	while (src[d] != '\0')
		dest[s + d] = src[d];
		d++;
	
	dest[s + d] = '\0';

	return (dest);
}
