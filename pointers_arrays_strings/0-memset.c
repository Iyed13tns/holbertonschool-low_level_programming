#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: the desired value
 * Return: changed array with nex value forr n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{

int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
