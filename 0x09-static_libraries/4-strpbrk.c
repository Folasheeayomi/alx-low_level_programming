#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Locates the first occurrence in the string pointed to by string1
 *
 * of any character from the string pointed to by string2
 * @s: The string2
 * @accept: The strin being pointed to
 * Return: A pointer to the character
 */

char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
