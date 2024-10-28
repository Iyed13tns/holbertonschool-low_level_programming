#include "main.h"
#include <stdio.h>

/**
 * main - tests the function _isupper
 *
 * Return: Always 0
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c)); /* Should print A: 1 */
    c = 'a';
    printf("%c: %d\n", c, _isupper(c)); /* Should print a: 0 */

    return (0);
}
