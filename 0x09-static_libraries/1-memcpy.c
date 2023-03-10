#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - Copies n characters from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Character to be copied
 *
 * Return: Integer value.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
