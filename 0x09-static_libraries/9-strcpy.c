#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - Copies the string pointed by source (including the null character)
 *
 * to the destination
 * @dest: Destination to which the string is copied
 * @src: The source from which the string is pointed by
 * Return: String value.
 */
char *_strcpy(char *dest, char *src)
{
return (strcpy(dest, src));
}
