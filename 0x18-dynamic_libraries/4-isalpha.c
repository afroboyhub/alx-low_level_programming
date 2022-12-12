#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Prints lowercase and uppercase alphabet
 *
 * Return: 1 on success 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
