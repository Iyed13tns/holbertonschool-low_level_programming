#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: The number of lines to draw
 * Return: 0
 */

void print_line(int n)

{


int c;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
_putchar (95);
}
_putchar('\n');

}
}
