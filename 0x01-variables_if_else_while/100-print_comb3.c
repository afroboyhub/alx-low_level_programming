#include <stdio.h>

/**
 * main - prints all possible different combinatons of two digits
 *
 * Description: using the main funtion
 * programs prints all possible different combo
 * Return: 0
 */

int main(void)
{
	int num, sec;

	for (num = 0; num < 10; num++)
	{
		for (sec = 0; sec < 10; sec++)
		{
			putchar((num % 10) + '0');
			putchar((sec % 10) + '0');

			if (num == 9 && sec == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
