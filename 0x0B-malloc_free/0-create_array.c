#include "main.h"

/**
 * create_array - creates an array fo chars
 * @size: size of the array
 * @c: character to be inititalized
 *
 * Return: Null if size 0 or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
