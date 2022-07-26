#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initialize it with a specific char
 * @size: size of array
 * @c: input character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	i = 0;
	x = malloc(size * sizeof(char));

	if (x == NULL)
		return (NULL);
	if (size == NULL)
		return (NULL);

	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
