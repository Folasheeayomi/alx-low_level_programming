#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Appends the first count characters of string2 to string1
 *
 * and ends the resulting string with a null character
 * @dest: Destination string2
 * @src: Source string1
 * @n: Character to be appended
 * Return: Nothing.
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
