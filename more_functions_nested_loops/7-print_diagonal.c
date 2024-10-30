#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: The number of times to print diagonal lines
 * Return: Always 0.
 */
void print_diagonal(int n)
{

int c, y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
for (y = 0; y < c; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
