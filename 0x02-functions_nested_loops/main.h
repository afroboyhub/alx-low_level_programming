#include <unistd.>

/**
 * _putchar -
 * @c: The character to print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}