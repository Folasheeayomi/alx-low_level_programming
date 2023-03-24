#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Executes a function parameter on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
	while (i < size)
	{
	action(array[i]);
	i++;
	}
	}
}
