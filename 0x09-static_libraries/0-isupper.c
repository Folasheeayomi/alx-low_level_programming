#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - Checks whether a character is an uppercase alphabet (A-Z) or not
 * @c: The character to be checked
 *
 * Return: character
 */

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
