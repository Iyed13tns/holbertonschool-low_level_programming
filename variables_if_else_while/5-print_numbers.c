#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}

