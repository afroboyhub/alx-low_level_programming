#include <stdio.h>

/**
 *main - prints the program name, followed by new line
 *@argc: the number of arguments
 *@argv: an array of pointers to the argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
