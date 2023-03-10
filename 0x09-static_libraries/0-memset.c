#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - Copies a single character for a
 *
 * specified number of times to an object
 * @s: The first character to be copied
 * @b: The second character to be copied
 * @n: Number of times to copy each character to an object
 *
 * Return: Copies of character.
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
