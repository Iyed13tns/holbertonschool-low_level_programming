#include <stdio.h>
#include <ctype.h>
/**
 * main 
 *
 * Return: 0 on success
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
