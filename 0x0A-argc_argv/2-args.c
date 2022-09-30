#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments a program reveives
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
