#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Finds the first occurrence of string2 in string1
 * @haystack: The first string
 * @needle: The second string whose first occurrence is being found
 * Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
