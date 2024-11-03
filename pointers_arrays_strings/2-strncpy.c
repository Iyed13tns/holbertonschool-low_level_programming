#include <stdio.h>

/**
 * _strncpy - Copies at most an inputted number
 * of byte from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string
 * @n: The maximum number of bytes to copied from src.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;

a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;

}
while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);

}
