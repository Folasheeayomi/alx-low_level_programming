#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - Copies count characters of string2 to string1
 * @dest: String1 which is also the destination
 * @src: The source string2
 * @n: The character count
 * Return: Integer value.
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
