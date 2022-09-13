#include "main.h"

/**
 * _islower -> checks if the charcter is lowercase
 * @c: a character argument
 * Description: using the _islower function
 * Return: 1 and 0 depending on condition
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
