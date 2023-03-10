#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - Returns the number of characters in the initial segment of str1
 * which consist only of characters from str2
 * @s: The initial segment that contains only characters
 * @accept: The characters to be returned
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
