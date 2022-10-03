#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: given string
 *
 * Return: Null if str=Null
 */

char *_strdup(char *str)
{
	char *array;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc((i + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		array[r] = str[r];
	return (array);
}
