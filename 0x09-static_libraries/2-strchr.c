#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - Finds the first occurrence of a character in a string
 * @s: The string from which the character is found
 * @c: The character to be found
 * Return: Integer value
 */

char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
