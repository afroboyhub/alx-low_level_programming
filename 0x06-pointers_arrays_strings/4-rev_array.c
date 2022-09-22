#include "main.h"

/**
 * reverse_array - function that reverses the content of an array on int
 * @a: content of array
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, p;
	int tmp;

	for (i = 0; i < n - 1; i++)
	{
		for (p = i + 1; p > 0; p--)
		{
			tmp = *(a + p);
			*(a + p) = *(a + (p - 1));
			*(a + (p - 1)) = tmp;
		}
	}
}
