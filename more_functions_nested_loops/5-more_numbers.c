#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int c, b;

for (c = 0; c < 10; c++)
{
for (b = 0; b <= 14;  b++)
{

if (b >= 10)
{
_putchar('1');

}

_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
