#include <stdio.h>

/**
 * main - pritns all single digit num
 *
 * Description: using the main function
 * program prints all single digit num from 0
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
