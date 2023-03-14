#include "main.h"
#include <stdio.h>

/**
 * create_array - Creates an array of characters
 * @size: Size of the array
 * @c: The character to be filled in the array
 *
 * Return: The array filled.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}
	return (s);
}