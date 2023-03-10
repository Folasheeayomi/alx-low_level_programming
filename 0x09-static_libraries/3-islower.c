#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - Checks whether a character is lowercase alphabet (a-z) or not
 * @c: The character to be checked
 * Return: Character.
 */

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
