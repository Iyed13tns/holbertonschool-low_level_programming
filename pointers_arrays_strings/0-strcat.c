#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
int k, n;

k = 0;
while (dest[k] != '\0')
{
k++;
}
n = 0;
while (src[n] != '\0')
{
dest[k] = src[n];
k++;
n++;
}

dest[k] = '\0';
return (dest);
}