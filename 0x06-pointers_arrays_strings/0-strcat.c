#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: source of file
 * @dest: destination of file
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
