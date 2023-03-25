#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: Integer.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	return (i);
	i++;
	}
	}
	}
	return (-1);
}
