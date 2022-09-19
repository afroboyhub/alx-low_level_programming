#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to buffer dest
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
		dest[index] = src[index];
		index++;
	
		return (dest);
}
